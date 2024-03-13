#include <stdio.h>


#define MONTHS 12
#define YEARS 5


int main(){
    float rain_per_years[YEARS][MONTHS] = {
                                    {0.2, 0.3, 0.8, 1, 1.2, 4, 3.2, 5.3, 1.2, 1.4, 3.2, 4.1},
                                    {0.2, 0.3, 0.8, 1, 1.2, 4, 3.2, 5.3, 1.2, 1.4, 3.2, 4.1},
                                    {0.2, 0.3, 0.8, 1, 1.2, 4, 3.2, 5.3, 1.2, 1.4, 3.2, 4.1},
                                    {0.2, 0.3, 0.8, 1, 1.2, 4, 3.2, 5.3, 1.2, 1.4, 3.2, 4.1},
                                    {0.2, 0.3, 0.8, 1, 1.2, 4, 3.2, 5.3, 1.2, 1.4, 3.2, 4.1}
                                    };

    for (int x = 0; x < sizeof(rain_per_years) / sizeof(rain_per_years[0]); x++) {
        for (int y = 0; y < sizeof(rain_per_years[0]) / sizeof(rain_per_years[0][0]); y++) {
            
        }
    }
}
