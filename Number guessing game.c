#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    int guess,random;
    int no_of_guess = 0;
    srand(time(NULL));
    printf("welcome to the world of number guessing: \n");
    random =rand() % 100 + 1;
    do{
     printf("enter guess between(1 to 100): \n");
     scanf("%d",&guess);
     no_of_guess++;
    if(guess > random)
    {
        printf("guess a smaller number:\n");
    }
    else if(guess < random)
    {
        printf("guess a larger number:\n");
    }
    else{
        printf("congratulations!! you successfully guess the number in %d attempts",no_of_guess);
    }

    }
    while(random != guess);
    printf("thanks for playing the game") ;
    printf("Developed by : Darun nayeem");
    return 0;
}
