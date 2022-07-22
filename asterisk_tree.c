#include<stdio.h>

int main()
{
    int x,spaces,stars,count_line,i,j;
    scanf("%d",&x);
    if (x>0 && x<11){
        spaces=x-1;
        stars=1;
        count_line=1;
        while (count_line<=x){
            for(i=1;i<=spaces;i++){
            printf(" ");
             }
            for(j=1;j<=stars;j++){
                printf("*");
            }
        spaces=spaces-1;
        stars=stars+2;
        count_line=count_line+1;
        printf("\n");
            }
        }
    else
        printf("Wrong Input");
    }