#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int maxNum = 10;
int main(void){
    int num = 3;
    int input;
    char charInput;
    int randomNum;
    time_t t;
    
    srand((unsigned) time(&t));

    while (num < 4 && num > 0){
        printf("Press 1 to play a game\nPress 2 to change the max number\nPress 3 to quit\n");
        scanf("%d", &input);
        //Scenario 1
        if(input == 1){
            printf("You have chosen to play! Pick a number 1 - %d\n", maxNum);
            scanf("%d%c", &input, &charInput);
            randomNum = rand() % (maxNum + 1);
            while(input != randomNum){
                if(input > randomNum){
                    printf("Unfortunately your answer was too high, try again.\n");
                    scanf("%d%c", &input, &charInput);
                }
                else if(input < randomNum){
                    if(charInput == 'q'){
                    printf("You have chosen to quit the game.\n");
                    goto skip;
                    }
                    printf("Unfortunately your answer was too low, try again.\n");
                    scanf("%d%c", &input, &charInput);
                }
                else{
                    printf("Invalid value, try again\n");
                    scanf("%d%c", &input, &charInput);
                }
            }
            printf("Awesome! You matched the number! Redirecting you to the menu.\n");
            goto skip;
        }
        //Scenario 2
        if(input == 2){
            printf("You have chosen to change the max number. Please enter a value above 0 and under 30.\n");
            scanf("%d", &input);
            while(input < 0 || input > 30){
                printf("You have not entered an appropriate number with the given range. Please try again. (0 - 30)\n");
                scanf("%d", &input);
            }
            printf("Awesome! You have changed the max value.\n");
            maxNum = input;
            goto skip;
        }
        //Scenario 3
        if(input == 3){
            printf("You have chosen to quit the game, thank you for playing.");
            break;
        }

        skip:
        num = 3;
    }
    return EXIT_SUCCESS;
}