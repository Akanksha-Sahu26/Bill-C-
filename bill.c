// Online C compiler to run C program online
#include<stdio.h>
int main()
{
 int item,qty,sum=0;
 printf("WELCOME TO BAKE AND SHAKE");
 do
 {
    printf("\n1.cake-200\n2.pastry-130\n3.patties-60\n4.quit\nenter item no");
    scanf("%d",&item);
    switch(item)
    {
        case 1:
        printf("how many cake ");
        scanf("%d",&qty);
        printf("\nDone!");
        sum=sum+qty*200;
        break;
       case 2:
        printf("how many pastry");
        scanf("%d",&qty);
        printf("Done");
        sum=sum+qty*130;
        break;
        case 3:
        printf("how many patties");
        scanf("%d",&qty);
        printf("Done");
        sum=sum+qty*60;
        break;
        case 4:
        printf("your total bill is %d\n THANK YOU!",sum);
        break;
        default:
        printf("wrong choice");
 }
 }while(item!=4);
 
 return 0;
}
        /* code */
 
    



