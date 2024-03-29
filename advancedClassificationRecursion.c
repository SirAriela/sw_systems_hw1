#include "NumClass.h"

int pow1(int x, int y)
{
    int ans = 1;

    while (y != 0)
    {
        ans *= x;
        y--;
    }
    return ans;
}

int getlength(int x)
{
    int len = 0;
    while (x >= 10)
    {
        len++;
        x = x / 10;
    }
    return len;
}
int reversenumber(int x)
{
    int len = getlength(x);
    if (x == 0)
        return 0;

    return (x % 10) * pow1(10, len) + reversenumber(x / 10);
}

int checkIsArmstrong(int x, int length)
{
    int temlen = length;
    int temp = 1;

    if (x == 0)
        return 0;

    while (temlen >= 0)
    {
        temp *= (x % 10);
        temlen--;
    }

    return temp + checkIsArmstrong((x / 10), length);
}

int isPalindrome(int x)
{
    int reversed = 0;

    reversed = reversenumber(x);

    if (x == reversed)
    {
        return 1;
    }
    return 0;
}

int isArmstrong(int s)
{
    int check = 0;
    int length = getlength(s);

    check = checkIsArmstrong(s, length);

    if (s == check)
    {
        return 1;
    }
    return 0;
}
