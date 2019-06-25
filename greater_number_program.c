// If first number is greater then print differnce of two number otherwise print sum

#include<stdio.h>
int main()
{
    int a,b,result;
    printf("Enter the two number: ");
    scanf("%d%d",&a,&b);
    
    result = a>b ? a-b : a+b;
    printf("Result: %d",result);
    return 0;
}
