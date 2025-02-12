// A program to guess a random number

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, i = 1;
    char guess;

    srand(time(0));
    number = rand() % 3 + 1;
    char comGuess=' ';
    //  printf("\n%d ",number);
    if(number == 1)
    {
        comGuess = 'r';
    }
    else if(number == 2)
    {
        comGuess = 'p';
    }
    else comGuess = 's';
    //printf("%c",comGuess);
    printf("\nRock - r \nPaper - p\nScissor -s\n");
    scanf("%c", &guess);
    if(comGuess == guess)
    {
        printf("Draw");
    }
    else{
       if(comGuess == 's')
        {
            if(guess == 'p')
            {
                printf("computer selected %c\n",comGuess);
                printf("computer wins");
            }else{
                printf("computer selected %c\n",comGuess);
                printf("you win");
                }
        }else if(comGuess == 'p')
        {
            if(guess == 'r')
            {
                printf("computer selected %c\n",comGuess);
                printf("computer wins");
            }else{
                printf("computer selected %c\n",comGuess);
                printf("you win");
                }
        }
        else{
            if(guess == 's')
            {
                printf("computer selected %c\n",comGuess);
                printf("computer wins");
            }else{
                printf("computer selected %c\n",comGuess);
                printf("you win");
                }
            }   
    }
    
    printf("\ngame over");
    return 0;
}