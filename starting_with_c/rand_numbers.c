#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int randomNumber = 0;
    int guess = 0;
    int maximumNumbrtOfGuesses;

    time_t t;

    srand((unsigned) time(&t));

    randomNumber = rand() % 21;

    printf("\n This is a guessing game.");
    printf("\n Numbers are between 0 and 20, which you must guess");
    
    for (maximumNumbrtOfGuesses = 5; maximumNumbrtOfGuesses > 0; --maximumNumbrtOfGuesses) {
        printf("\nYou have %d number of tr%s left\n", maximumNumbrtOfGuesses, maximumNumbrtOfGuesses == 1 ? "y" : "ies");
        printf("\nEnter a guess\n");
        scanf("%d", &guess);
        if (guess == randomNumber) {
            printf("\nguess is correct\n");
            break;
        } else if (guess < randomNumber) {
            printf("\nThe number you geussed is lower then my number\n");
        } else if (guess > randomNumber) {
            printf("\nThe number you guessed is higher then my number\n");
        } else if (guess < 0 || guess > 20) {
            printf("the number is out of range it should be between 0 and 20\n");
        }
    }

    return 0;
}
