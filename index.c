#include <stdio.h>
#include <conio.h>

void main(){
    int a;
    float p;
    char ch[3];
    printf("Enter your age:\n");
    scanf("%d",&a);
    printf("the integer is:%d\n",a);

    printf("\n Enter the charecter:\n");
    scanf("%s",&ch);
    printf("the string is:%s",ch);
    
    printf("\n Enter the percentage:\n");
    scanf("%f",&p);
    printf("the float is:%f",p);

    
    getch();
    

}