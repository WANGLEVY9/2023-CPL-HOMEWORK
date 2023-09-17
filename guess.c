//
// Created by 22166 on 2023/9/6.
//
//Program=Input+Data+Operation+Output
/*
 * printf the rules of the game to the players
 * generate a random number between 1 and high as the secret number
 * ask the player to input his guess
 * obtain the guess number
 * compare it with the secret number
 * and inform the player of the result
 *repeat(3)(4)until the player wins or loses
 */
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int high=1000;
    int number_of_tries=10;
    printf("Welcome to play the number guess game\n"
           "You need to input a guess number and repeat the step until you win\n"
           "The system wil generate a random number between 1 and %d.\n"
           "You have %d tries\n",
           high,number_of_tries);
    srand(time(NULL));
    int secret=rand () % high + 1;
    int guess=0;
    while(number_of_tries>0)
    {
        printf("Please input your guess:\n");
        scanf_s("%d", &guess);
        printf("Your guess is:%d\n", guess);
        if (guess == secret) {
            printf("You win!!!\n");
            break;
        } else if (guess > secret) {
            printf("Your guess is too big!\n");
        } else {
            printf("Your guess is too small!\n");
        }
        number_of_tries--;
        printf("You still have %d tries left\n",number_of_tries);
    }
    return 0;
}
