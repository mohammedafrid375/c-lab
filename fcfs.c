#include <stdio.h>
#include <conio.h>
void main(){
// declare variables

int i,j,n,bt[10],wt[10],tt[10],t1,w1;
float at,aw;
w1=0;
t1=0;

// getting user input of burst time
printf("....FIRST COME FIRST SERVE ALGORITHM....\n");
printf("\nEnter the number of values :");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("\nEnter the burst time of the values :");
    scanf("%d",&bt[i]);
}
// declaring wt tt
for(i=0;i<n;i++){
    wt[0]=0;
    tt[0]=bt[0];
    wt[i+1]=wt[i]+bt[i];
    tt[i+1]=tt[i]+bt[i+1];
// declaring sum of tt wt
    w1=w1+wt[i];
    t1=t1+tt[i];
}
aw=w1/n;
at=t1/n;

printf("\nbt\twt\ttt");
for(i=0;i<n;i++){
    printf("\n%d\t%d\t%d",bt[i],wt[i],tt[i]);
}

    printf("\naw= %f\nat= %f",aw,at);


}