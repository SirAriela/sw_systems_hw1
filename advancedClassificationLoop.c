#include "NumClass.h"
int isPalindrome(int x)
{
    int x2 = x;
    int revarsed = 0;
    while (x > 0)
    {
        revarsed = revarsed * 10 + x % 10;
        x = x / 10;
    }
    if (x2 == revarsed)
    {
        return 1;
    }
    return 0;
}
int isArmstrong(int s)
{
    int s2 = s;
    int lenghd = 1;
    int sum = 0;
    int digit;
    int digitSum = 1;
    int i;
    while (s >= 10)
    {
        lenghd++;
        s = s / 10;
    }
    s = s2;
    while (s > 0)
    {
        digitSum = 1;
        digit = s % 10;
        s = s / 10;
        for (i = 0; i < lenghd; i++)
        {
            digitSum = digitSum * digit;
        }
        sum = sum + digitSum;
    }
    if (sum == s2)
    {
        return 1;
    }
    return 0;
}