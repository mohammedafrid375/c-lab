#include <stdio.h>
#include <conio.h>
void main()
{
    // declare variables
    int i,sq=0,temp,count=0,swt=0,stat=0;
    int bt[10],st[10],wt[10],tat[10],n,tq;
    float awt,atat;
    

    // getting no of process & burst time from user

    printf("....ROUND ROBIN ALGORITHM....\n\n");
    printf("Enter th quantum time :");//getting quantum time limit
    scanf("%d",&tq);
    printf("Enter the No process :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the burst time of the process :");
        scanf("\n%d",&bt[i]);
        st[i]=bt[i]; //assigning burst time equals starting time to calculate turnaround time
    }
    

    //start the process table
    while(1)
    {
        for(i=0,count=0;i<n;i++)
        {
            temp=tq;

            if(st[i]==0){//count only increamented when balance start time becomes zero
                count++;
                continue;
            }

            if(count==n){//loop terminates when every turns to zero start value
                break;
            }
            if(st[i]>=tq){//balance burst time for the process having higher burst time than qt
                st[i]=st[i]-tq;
            }else if(st[i]>=0){//getting burst time on temp and assign it as 0 for lesser burst time
                temp=st[i];
                st[i]=0;
            }
            sq=sq+temp;
            tat[i]=sq;
        
        }
        if(count==n)break;
    }
    for(i=0;i<n;i++)//summation of wait time and turnaround
    {
        wt[i]=tat[i]-bt[i];
        swt=swt+wt[i];
        stat=stat+tat[i];
    }   
    awt=swt/n;
    atat=stat/n;

    printf("\nprocess-no\tburst-time\twait-time\tturnaround-time");
    for(i=0;i<n;i++)//printing table of values
    {
        printf("\n\t%d\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
    }
    printf("\nAverage wait time :%f\nAverage turnaround time :%f",awt,atat);

}