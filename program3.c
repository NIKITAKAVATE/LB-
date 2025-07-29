//problem statement; accept the two integers and perform the addition
#include<stdio.h>
int main()
{
    auto int ivalue1=0;
    auto int ivalue2=0;
    auto int iAns=0;
    printf("Enter first number\n");
    scanf("%d",&ivalue1);
    printf("enter second nubmer\n");
    scanf("%d",&ivalue2);
    iAns=ivalue1+ivalue2;
    printf("addition is :%d",&iAns);
    return 0;
}
