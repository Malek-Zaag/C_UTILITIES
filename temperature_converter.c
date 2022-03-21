#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    float temp;
    char unit;
    printf("please enter the temperature: \t");
    scanf("%f", &temp);
    printf("please enter the unit of your temperature: ");
    scanf(" %c", &unit);
    unit = toupper(unit);
    if (unit == 'C')
    {
        temp = (temp * 9) / 5 + 32;
        printf("%lf", temp);
        printf("Your temperature in Farhenheit is :\t%.1f", temp);
    }
    else if(unit == 'F')
    {
        temp = ((temp - 32) * 5) / 9;
        printf("Your temperature in Celsius is :\t%.1f", temp);
    }
    else{
        printf("please enter a valid unit next time :)");
    }
    return 0;
}