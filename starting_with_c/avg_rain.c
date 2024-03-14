#include <stdio.h>


#define MONTHS 12
#define YEARS 5


int main(){
    int year, month;
    float subtotal, total;
    float rain_per_years[YEARS][MONTHS] = {
                                    {0.2, 0.3, 0.8, 1, 1.2, 4, 3.2, 5.3, 1.2, 1.4, 3.2, 4.1},
                                    {0.2, 0.3, 0.8, 1, 1.2, 4, 3.2, 5.3, 1.2, 1.4, 3.2, 4.1},
                                    {0.2, 0.3, 0.8, 1, 1.2, 4, 3.2, 5.3, 1.2, 1.4, 3.2, 4.1},
                                    {0.2, 0.3, 0.8, 1, 1.2, 4, 3.2, 5.3, 1.2, 1.4, 3.2, 4.1},
                                    {0.2, 0.3, 0.8, 1, 1.2, 4, 3.2, 5.3, 1.2, 1.4, 3.2, 4.1}
                                    };

    for (year = 0, total = 0; year < sizeof(rain_per_years) / sizeof(rain_per_years[0]); year++) {
        for (month = 0, subtotal = 0; month < sizeof(rain_per_years[0]) / sizeof(rain_per_years[0][0]); month++) {
            subtotal += rain_per_years[year][month];
        }
        printf("%5d %15.1f\n", 2010 + year, subtotal);
        total += subtotal;
    }

    printf("\nThe yearly average in %.1f inches. \n\n", total / YEARS);

    return 0;
}
