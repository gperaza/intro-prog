#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get two strings
    string s = get_string("s: ");
    string t = get_string("t: ");

    if (s == t)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }
}
