#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get scores from user
    int score1 = get_int("Score 1: ");
    // score 1 is now stored in 4 continuous bytes in memory
    int score2 = get_int("Score 2: ");
    int score3 = get_int("Score 3: ");
    // so are socore 2 and 3, but the 4 byte chunks not need be next to each
    // other

    // Generate first bar
    printf("Score 1: ");
    for (int i = 0; i < score1; i++)
    {
        printf("#");
    }
    printf("\n");

    // Generate second bar
    printf("Score 2: ");
    for (int i = 0; i < score2; i++)
    {
        printf("#");
    }
    printf("\n");

    // Generate third bar
    printf("Score 3: ");
    for (int i = 0; i < score3; i++)
    {
        printf("#");
    }
    printf("\n");
}
