#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void instructions();
int generateRandoms(int, int);
int execute(int entered, int sum);
void printEnd(int);
int main()
{
    instructions();
    int lower = 1, upper = 6, num, sum = 0, result;
    srand(time(0));
    do
    {
        printf("Enter the number you want to score\n");
        scanf("%d", &num);
        result = execute(num, sum);
        sum = result;

    } while (result != 0);
    system("PAUSE");
    return 0;
}
void instructions()
{
    printf("Hello! Welcome to the 'Hand Cricket' game. Refreshing some of your childhood memories eh...\n\n");
    printf("The rules are simple! You have to score runs against the computer. Just type the number of runs you want to score, if the number you entered matches the number thrown by the computer, YOU'RE OUT!. If it does not match, carry on and build up your score,\n\n");
    printf("WARNING!! You are only allowed to enter numbers from 1 to 6. Don\'t enter number beyond this range.\n\nEnjoy!!\n\n\n");
}
int generateRandoms(int lower, int upper)
{
    int num = (rand() % (upper - lower + 1)) + lower;
    return num;
}
int execute(int entered, int sum)
{
    int random = generateRandoms(1, 6);
    if (random == entered)
    {
        printEnd(sum);
        return 0;
    }
    else
    {
        printf("\n%d\tVS\t%d\n\n", entered, random);
        sum += entered;
        printf("Your current score is %d\n\n\n", sum);
        return sum;
    }
}
void printEnd(int sum)
{
    printf("Howwwzzzaaattt!!\n");
    printf("You're Out at %d runs\n", sum);
}
