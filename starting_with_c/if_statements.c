#include <stdio.h>


int main(){
    int hours_worked;
    float tax, tax_p, tax_procentail, final_pay_with_tax, final_pay_witout_tax;
    int basic_pay_rate = 12;
    printf("Type how many hourd did you work this week: \n");
    scanf("%d", &hours_worked);
    final_pay_with_tax = (hours_worked > 40) ? ((hours_worked * basic_pay_rate) + ((hours_worked - 40) * (basic_pay_rate * 0.5))) : (hours_worked * basic_pay_rate); 
    tax_procentail = 0.15;
    if (final_pay_with_tax <= 300) {
        tax = final_pay_with_tax * tax_procentail;
        final_pay_witout_tax = final_pay_with_tax - tax;
    } else if (final_pay_with_tax <= 450 && final_pay_with_tax > 300) {
        float over300 = final_pay_with_tax - 300;
        tax = 300 * tax_procentail;
        tax_procentail = 0.2;
        tax += over300 * tax_procentail;
        final_pay_witout_tax = final_pay_with_tax - tax;
    } else if (final_pay_with_tax > 450) {
        float over450 = final_pay_with_tax - 450;
        tax = 300 * tax_procentail;
        tax_procentail = 0.2;
        tax += 150 * tax_procentail;
        tax_procentail = 0.25;
        tax += over450 * tax_procentail;
        final_pay_witout_tax = final_pay_with_tax - tax;
    }

    if (hours_worked > 40) {
        printf("You work too much");
    }
    printf("the pay rate: %d \n", basic_pay_rate);
    printf("tax: %f \n", tax);
    printf("final pay with tax: %f \n", final_pay_with_tax);
    printf("final pay without tax: %f \n", final_pay_witout_tax);
}
