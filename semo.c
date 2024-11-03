#include <stdio.h>
#include <conio.h>
void main()
{
    // Declare variable
    int buffers=10, buffer[10],in=0,out=0,choice=0,pro,con;

    while(choice!=3){
        printf("\n1.produce\t2.consume\t3.consume");
        printf("\n1Enter your choice :");scanf("%d",&choice);
        
        switch(choice){

            case 1:if(in==buffers)
            {
            printf("\nthe buffer is full...");
            }else{
            printf("\n1Enter the pruduce value :");scanf("%d",&pro);
            buffer[in]=pro;
            in=in+1;
            }
            break;;;
            case 2:if(in==out){
            printf("\nthe buffer is Empty...");
            }else{
                con=buffer[out];
                printf("\nthe consumed value is %d",con);
                out=out+1;
            }
            break;;;
        }
    }
    
}