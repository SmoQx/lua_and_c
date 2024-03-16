#include <stdio.h>
#include <stdbool.h>


void render(char game_board[3][3]) {
    printf("Game board\n");
    for (int i = 0; i < sizeof(*game_board) / sizeof(*game_board[0]); i++) {
        for (int j = 0; j < sizeof(*game_board) / sizeof(*game_board[0]); j++) {
            printf(" [%c] ", game_board[i][j]);
        }
        printf("\n");
    }
}


void update(char game_boar[3][3], char symbol) {
    int posX, posY;
    do {

        do {
            printf("Input game row number \n");
            if (scanf("%d", &posX) != 1) {
                printf("Must be a int\n");
                while (getchar() != '\n');
                continue;
            }
        }while (2 < posX && posX > 0);

        do {
            printf("Input game column number \n");
            if (scanf("%d", &posY) != 1) {
                printf("must be a int\n");
                while (getchar() != '\n');
                continue;
            }
        }while (2 < posY && posY > 0);

        if (game_boar[posX][posY] != ' ') {
            printf("This position is taken\n");
        }

    }while (game_boar[posX][posY] != ' ');
    game_boar[posX][posY] = symbol;
}


char check_win_condition(char game_board[3][3]) {
    char output;
    for (int i = 0; i < sizeof(*game_board) / sizeof(*game_board[0]); i++) {
        if (game_board[i][0] == 'o' || game_board[0][i] == 'x') {
            if (game_board[i][0] == game_board[i][1] && game_board[i][0] == game_board[i][2]) {
                output = game_board[i][0];
            } else if (game_board[0][i] == game_board[1][i] && game_board[0][i] == game_board[2][i]) {
                output = game_board[0][i];
            }
            if (game_board[0][0] == game_board[1][1] && game_board[0][0] == game_board[2][2]) {
                output = game_board[0][0];
            } else if (game_board[2][0] == game_board[1][1] && game_board[2][0] == game_board[0][2]) {
                output = game_board[2][0];
            }
        }
    }
    return output;
}


int main() {
    char game_board[3][3] = {
                            {' ', ' ', ' '}, 
                            {' ', ' ', ' '}, 
                            {' ', ' ', ' '}  
                            };
    int counter = 0;
    char symbol;
    while (true) {
        if (counter % 2 == 0) {
            symbol = 'x';
        } else {
            symbol = 'o';
        }
        printf("You are %c\n", symbol);
        render(game_board);
        update(game_board, symbol);
        if (check_win_condition(game_board) == 'x') {
            printf("The x won the game\n");
            break;
        } else if (check_win_condition(game_board) == 'o') {
            printf("The o won the game\n");
            break;
        }     
        counter++;
    }
    return 0;
}
