// A program to guess a random number

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, i = 1;

    srand(time(0));
    number = rand() % 100 + 1;
    //  printf("\n%d ",number);

    do
    {
        printf("\nGuess a Number between 0 and 100\n");
        scanf("%d", &guess);
        if (i < 2){
            if (guess == number)
            {
                printf("Entered correct number.");
                printf("\nYou have guessed in %d attempts.", i);
                break;
            }
            else if (guess < number)
            {
                printf("Enter higher number \n");
                i++;
            }
            else
            {
                printf("Enter Lower number \n");
                i++;
            }
       }else
           break;
    } while (1);
    printf("game over");
    return 0;
}