#include<stdio.h>
int main()
{
    int row,coloumn,direction;
    printf("enter position of knight : \n");
    scanf("%d %d",&row,&coloumn);
    printf("Which direction to move : \n\t1 - forward right\n\t2 - forward left\n\t3 - backward right \n\t 4 - backward left\n");
    scanf("%d",&direction);
    switch(direction){
        case 1 :
            printf("forward right has been selected\n");
            printf("Present position of the knight is %d %d\n",row,coloumn);
            if((row <= 8 && row >=1) && (coloumn>=1 && coloumn<=7)){
                printf("Next position of the knight is %d %d\n",++row,coloumn+2);
            }else if(row <= 7 && coloumn<=8){
                  printf("Next position of the knight is %d %d\n",row+2,coloumn++);
            }
            else
                printf("forward is not possible");
            break;
        case 2:
            printf("forward left has been selected\n");
            printf("Present position of the knight is %d %d\n",row,coloumn);
            if(row<=8 && coloumn>=3){
                printf("Next position of the knight is %d %d\n",++row,coloumn-2);
            }else if(row <= 7 && coloumn>=2){
                  printf("Next position of the knight is %d %d\n",row+2,--coloumn);
            }
            else
                printf("forward is not possible");
            break;
        default :
            printf("enter correct option");
            break;
    }
    return 0;
}