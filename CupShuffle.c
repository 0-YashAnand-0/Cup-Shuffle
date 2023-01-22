#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main()
{   
    int dfclty, cup, guess, nges=1, bgn;

    printf("*Welcome to 'Cup Shuffle'!*\n*A Classic Game brought to Digital Life!*\n\n"); 
    printf("Play to win the following prizes:\nRs 20 in 1-5 attempts!\nRs 15 in 5-10 attempts!\nRs 5 in 11-15 attempts!\n");
    printf("\nInteresed? Press any number To Begin!\n");
    scanf("%d", &bgn);

    printf("\nPlease select the difficulty by choosing the total number of cups in the game!\n");
    printf("(Example: Entering 4 will intiate the game with 4 Cups!)\n");
    scanf("%d", &dfclty);

    srand(time(0));
    cup = rand()%dfclty + 1;

    for(guess; guess!=cup; nges++){
        printf("\nGuess from cups 1 to %d, in which cup the prize is hidden in!\n", dfclty);
        scanf("%d", &guess);

        if(guess>cup){
            printf("(Hint: It's cup that comes before this!)\n");}

        else if(guess<cup){
            printf("(Hint: It's cup that comes after this!)\n");}

        else{
            printf("\n*It took you %d attempts to find the prize hidden in the correct cup! Therefore, ", nges);
            }}

    if (nges >= 1 && nges <= 5){
        printf("you win Rs 20/-!!!*\n");}

    else if (nges >= 6 && nges <= 10){
        printf("you win Rs 10/-!!!*\n");}

    else if (nges >= 11 && nges <= 15){
        printf("you win Rs 5/-!!!*\n");}

    else{
        printf("you lose since you took more than 15 attempts! :(\nBetter Luck Next Time!*\n");}

    printf("\nPlease Restart To Win The Following Prizes:\nRs 20 in 1-5 attempts!\nRs 15 in 5-10 attempts!\nRs 5 in 11-15 attempts!\n");
            
    return 0;
}
