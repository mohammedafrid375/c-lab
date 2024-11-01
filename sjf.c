#include <stdio.h>
#include <conio.h>

void main(){
    // declaring variables
    int i,j,n,t,wt[10],tt[10],bt[10],w1,t1;
    float aw,at;

    w1=0;
    t1=0;

    // getting user inputs for burst time
    printf("SHORTEST JOB FIRST ALGORITHN\n");
    printf("\n");
    printf("Enter the number of process :\t");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("enter the burst time of the process :");
        scanf("%d",&bt[i]);
    }
    // for(i=0;i<n;i++){
    //     printf("process value: %d\n",bt[i]);
    // }

    // shorting the burst time
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(bt[i]<bt[j]){
                t=bt[j];
                bt[j]=bt[i];
                bt[i]=t;
            }
        }
    }

    // for(i=0;i<n;i++){
    //     printf("process value: %d\n",bt[i]);
    // }

    // defining waiting value and terminating values
    for(i=0;i<n;i++){
        wt[0]=0;
        tt[0]=bt[0];
        wt[i+1]=wt[i]+bt[i];
        tt[i+1]=tt[i]+bt[i+1];
    }
    // average of waiting time and terminating time

    for(i=0;i<n;i++){
        w1=w1+wt[i];
        t1=t1+tt[i];
    }
    aw=w1/n;
    at=t1/n;
// printing the final table
    printf("bt\twt\ttt");

    for(i=0;i<n;i++){
        printf("\n%d\t%d\t%d",bt[i],wt[i],tt[i]);
    }
    printf("\naw = %f\nat = %f",aw,at);
}