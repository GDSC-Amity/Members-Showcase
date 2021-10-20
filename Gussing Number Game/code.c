#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char const *argv[])
{
    int number,guess,nguesses = 1;
    srand(time (0) ); 
    number = rand () % 100 + 1 ; //to check how random number is generated go to random_number.c
    //printf("The number is %d\n",number); 
    //keep running the loop until number is correctlely gussed
    do
    {
        printf("Guess any number in between 1 to 100 : \n");
        scanf("%d",&guess);
        if ( guess > number)
        {
            printf("Lower number  please...\n");
        }
        else if (guess < number )
        {
            printf("Higher number please...\n");
        }
        else 
        {
            printf("Finally you gussed correctely in  %d attempt\n",nguesses);
        }
        nguesses++; 
    } while (guess != number);
    return 0;
}