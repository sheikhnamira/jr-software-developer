/*example square of number
with return value and with argument
*/
#include<stdio.h>
int getsquare(int number)
{
    return number*number;
}
void main()
{
    int n,sq;
    printf("enter a number:");
    scanf("%d",&n);
    sq=getsquare(n);
    printf("square=%d",sq);
}