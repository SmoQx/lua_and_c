#include <stdio.h>
#include <stdbool.h>


void enums_example(void){

    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum company xerox = XEROX;
    enum company google = GOOGLE;
    enum company ebay = EBAY;

    printf("%i \n", xerox);
    printf("%i \n", google);
    printf("%i \n", ebay);
    
}


void directions(void){
    enum direction {up = 0, right = 90, down = 180, left = 270};
    printf("%d\n", right);
}


int main(int argc, char *argv[]){
    enums_example();
    directions();
    printf("to co wpisałeś :: %s \n", argv[1]);

    return 0;
}
