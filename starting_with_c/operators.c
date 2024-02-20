#include <stdint.h>
#include <stdio.h>
int main(){

    int minutes;
    double days, years;
    intmax_t asdf;
    printf("%ld \n %d \n", asdf, INT16_MAX);
    printf("enter the number of minutess \n");
    scanf("%d", &minutes);
    days = (minutes / 60) / 24;
    years = days / 365;
    printf("For provided minutess the number of days is %f, the number of years is %f", days, years);

}
