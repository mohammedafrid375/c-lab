#include <stdio.h>
#include <conio.h>
void main()
{
    //declaring the var
    int pno[10],priorno[10],bt[10],wt[10],tat[10],s,i,j,n,stat=0,swt=0;
    float atat,awt;

    //getting input from user 

    printf("....PRIORITY SCHEDULING ALGORITHM....\n");
    printf("Enter the no of process :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n\nProcess no %d:",i+1);
        printf("\nEnter the burst time of process %d :",i+1);
        scanf("%d",&bt[i]);
        printf("Enter the priority order of process %d :",i+1);
        scanf("%d",&priorno[i]);
        pno[i]=i+1;
    }

//shorting the prior , pno , bt on prior order

    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
        {
            if(priorno[i]<priorno[j]){//swapping the lesser values to the top
                s=priorno[i];//priority no
                priorno[i]=priorno[j];
                priorno[j]=s;

                s=pno[i];//prcess no
                pno[i]=pno[j];
                pno[j]=s;

                s=bt[i];//burst time
                bt[i]=bt[j];
                bt[j]=s;
            }
        }
    }

//declaring the wait and turnaround time

    for(i=0;i<n;i++)
    {
        wt[0]=0;
        tat[0]=bt[0];
        wt[i+1]=wt[i]+bt[i];
        tat[i+1]=bt[i+1]+tat[i];

        //sum of wait time and turnaround time
        swt=swt+wt[i];
        stat=stat+tat[i];
    }
    awt=swt/n;
    atat=stat/n;

    //printing the values

    printf("\njob-no\tburst-time\twait-time\tturnaround-time\tpriority");
    for(i=0;i<n;i++)
    {
        printf("\n%d\t%d\t\t%d\t\t%d\t%d",pno[i],bt[i],wt[i],tat[i],priorno[i]);
    }
    printf("\nAverage of the wait time :%f\nAverage of the turnaround time :%f",awt,atat);
    


}