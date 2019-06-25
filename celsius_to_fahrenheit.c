// Program for conversion of celsius temperature to fahrenheit
// formula ----> f=c*1.8 +32

#include<stdio.h>
int main()
{
    float temp_c,temp_f;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&temp_c);

    // Formaula
    temp_f = temp_c*1.8 +32;
    printf("Temperature in fahrenheit:= %0.4f",temp_f);
    return 0;
}
