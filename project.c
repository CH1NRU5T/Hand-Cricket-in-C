#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandoms(int, int);
int execute(int entered, int sum);
void printEnd(int);
int main()
{
    int lower = 1, upper = 6, num, sum = 0, result;
    srand(time(0));
    do
    {
        printf("Enter the number you want to score\n");
        scanf("%d", &num);
        result = execute(num, sum);
        sum = result;
    } while (result != 0);
    return 0;
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
        sum += entered;
        return sum;
    }
}
void printEnd(int sum)
{
    printf("Howwwzzzaaattt!!\n");
    printf("You're Out at %d runs", sum);
}
