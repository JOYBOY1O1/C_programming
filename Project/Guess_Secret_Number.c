#include<stdio.h>
#include<stdlib.h>

int main()
{
int secretNumber = 5;
int guess;
int guessCount = 0;
int guessLimit = 3;
int outofguess = 0;

while(guess != secretNumber && outofguess == 0){
    if(guessCount<guessLimit){
        printf("Enter a number: ");
        scanf("%d",&guess);
        guessCount++;
    }
    else{outofguess=1;}
}
if (outofguess==1){
    printf("Out of Guesses");
}else printf("You win");

}