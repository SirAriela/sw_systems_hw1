#include "NumClass.h"

int isPalindrome(int x)
{
    int reversed = 0;

    reversed = reverse(x);

    if (x == reversed)
    {
        return 1;
    }
    return 0;
}

int reverse(int x)
{
    if (x == 0)
        return 0;
    return (x % 10) * 10 + reverse(x / 10);
}

int isArmstrong(int s)
{
    int armstrong = 0;

    armstrong = checkIsArmstrong(s);

    if (s == armstrong)
    {
        return 1;
    }
    return 0;
}

int checkIsArmstrong(int x)
{
    int lenghd = 0;
    int temp = 1;
    if (x == 0)
        return 0;

    while (x >= 10)
    {
        lenghd++;
        x = x / 10;
    }

    while (lenghd > 0)
    {
        temp *= (x % 10);
        lenghd--;
    }
    return temp + checkIsArmstrong(x / 10);
}
