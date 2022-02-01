#include <stdio.h>

const int NUM_ROWS = 18; //8 rows in chess. But, my board will have 18 rows including rows such as "------"

//function returns pointers pointing to char.
char** initializeChessBoard(char** chessBoard, char playerCol){
    
    /*
     * intitial chess board for the color the player chose.
     */

    //initial board if the player chose black.
    if(playerCol == 'b' || playerCol == 'B'){
        //the rows of each 
        chessBoard[0] =  "----------------------------------";
        chessBoard[1] =  "8| ♜ | ♞ | ♝ | ♛ | ♚ | ♝ | ♞ | ♜ |";
        chessBoard[2] =  "----------------------------------";
        chessBoard[3] =  "7| ♟ | ♟ | ♟ | ♟ | ♟ | ♟ | ♟ | ♟ |";
        chessBoard[4] =  "----------------------------------";
        chessBoard[5] =  "6|   |   |   |   |   |   |   |   |";
        chessBoard[6] =  "----------------------------------";
        chessBoard[7] =  "5|   |   |   |   |   |   |   |   |";
        chessBoard[8] =  "----------------------------------";
        chessBoard[9] =  "4|   |   |   |   |   |   |   |   |";
        chessBoard[10] = "----------------------------------";
        chessBoard[11] = "3|   |   |   |   |   |   |   |   |";
        chessBoard[12] = "----------------------------------";
        chessBoard[13] = "2| ♙ | ♙ | ♙ | ♙ | ♙ | ♙ | ♙ | ♙ |";
        chessBoard[14] = "----------------------------------";
        chessBoard[15] = "1| ♖ | ♘ | ♗ | ♕ | ♔ | ♗ | ♘ | ♖ |";
        chessBoard[16] =  "----------------------------------";
        chessBoard[17] = " | a | b | c | d | e | f | g | h |";

    }
    //initial board if the player chose white. 
    else if(playerCol == 'w' || playerCol == 'W'){
        chessBoard[0] =  "----------------------------------";
        chessBoard[1] =  "8| ♖ | ♘ | ♗ | ♕ | ♔ | ♗ | ♘ | ♖ |";
        chessBoard[2] =  "----------------------------------";
        chessBoard[3] =  "7| ♙ | ♙ | ♙ | ♙ | ♙ | ♙ | ♙ | ♙ |";
        chessBoard[4] =  "----------------------------------";
        chessBoard[5] =  "6|   |   |   |   |   |   |   |   |";
        chessBoard[6] =  "----------------------------------";
        chessBoard[7] =  "5|   |   |   |   |   |   |   |   |";
        chessBoard[8] =  "----------------------------------";
        chessBoard[9] =  "4|   |   |   |   |   |   |   |   |";
        chessBoard[10] = "----------------------------------";
        chessBoard[11] = "3|   |   |   |   |   |   |   |   |";
        chessBoard[12] = "----------------------------------";
        chessBoard[13] = "2| ♟ | ♟ | ♟ | ♟ | ♟ | ♟ | ♟ | ♟ |";
        chessBoard[14] = "----------------------------------";
        chessBoard[15] = "1| ♜ | ♞ | ♝ | ♛ | ♚ | ♝ | ♞ | ♜ |";
        chessBoard[16] = "----------------------------------";
        chessBoard[17] = " | a | b | c | d | e | f | g | h |";
    }

    return chessBoard;
}

void printBoard(char **chessBoard){
    /*
     * Print the board
     */
    printf("\n");
    for (int i = 0; i < NUM_ROWS; i++) {
        printf("%s\n", chessBoard[i]);
    }
    printf("\n");
}

//main function.
int main(){
    char **chessBoard;
    char playerCol; //stores the colour chosen by the player.

    printf("\nChoose player color: (b)lack or (w)hite. Type 'b' for black or 'w' for white.\n"); 
    while(playerCol != 'b' && playerCol != 'B' && playerCol != 'W' && playerCol != 'w'){
       
        scanf(" %c", &playerCol); //getting the character the user entered (ignoring \n). If they entered something other than 'b' or 'w' (character case does not matter), they will be prompted to enter again.
    }

    printBoard(initializeChessBoard(chessBoard, playerCol)); //printing the initial chess board.

    return 0;
}