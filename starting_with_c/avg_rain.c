#include <stdio.h>
#include <stdlib.h>


#define MONTHS 12
#define YEARS 5


int main(){
    int year, month;
    float subtotal, total;
    float rain_per_years[YEARS][MONTHS] ={
    {0.20790791, 0.67904944, 0.30941827, 0.09641112, 0.78933076, 0.55050896, 0.9379442, 0.23706569, 0.28524588, 0.08548932, 0.00355166, 0.97961847},
    {0.47040561, 0.11871485, 0.70589052, 0.63701116, 0.8557322, 0.39394364, 0.70192809, 0.88075952, 0.28566828, 0.59607879, 0.07808693, 0.04924152},
    {0.87382306, 0.34829254, 0.71240464, 0.81813876, 0.4051707, 0.40459231, 0.17730463, 0.33214967, 0.98754518, 0.13288206, 0.57286806, 0.31914356},
    {0.8026949, 0.49881015, 0.84126783, 0.55166977, 0.42444699, 0.76918381, 0.64067817, 0.81149062, 0.89502382, 0.37938096, 0.68350293, 0.36054578},
    {0.16756059, 0.31190598, 0.11180816, 0.99297816, 0.67179725, 0.40337787, 0.49840248, 0.30422965, 0.42965957, 0.56860945, 0.09083384, 0.4181312, }
    };

    for (year = 0, total = 0; year < sizeof(rain_per_years) / sizeof(rain_per_years[0]); year++) {
        for (month = 0, subtotal = 0; month < sizeof(rain_per_years[0]) / sizeof(rain_per_years[0][0]); month++) {
            subtotal += rain_per_years[year][month];
        }
        printf("%5d %15.1f\n", 2010 + year, subtotal);
        total += subtotal;
    }

    printf("\nThe yearly average in %.1f inches. \n\n", total / YEARS);
    
    printf("Monthly avarage: \n\n");
    printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    for (month = 0; month < MONTHS; month++) {
        for (year = 0, subtotal = 0; year < YEARS; year++) {
            subtotal += rain_per_years[year][month];
        }
        printf("%4.1f ", subtotal/YEARS);
    }
    printf("\n");

    return 0;
}
