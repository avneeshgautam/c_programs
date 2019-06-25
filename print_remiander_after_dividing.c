// accept any number and print the value of remainder after dividing it by 3

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    
    printf("Remainder 0f %d after dividing by 3: %d",num,num%3);
    return 0;
}
