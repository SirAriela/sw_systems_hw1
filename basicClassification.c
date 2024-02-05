#include "NumClass.h"

int isPrime(int x)
{
    int ans = 1;
    int a = 0;
    int i;
    if (x < 1)
    {
        return 0;
    }

    if (x == 1)
    {
        return 1;
    }

    if (x == 2)
        return 2;

    while (a * a < x)
    {
        a = a + 1;
    }
    for (i = 2; i < a + 1; i++)
    {
        if (x % i == 0)
        {
            ans = 0;
        }
    }
    return ans;
}
int isStrong(int s)
{
    int sum = 0;
    int s2 = s;
    int modolo;
    int i;
    int cerontDigitSum;
    if (s < 1)
    {
        return 0;
    }
    while (s >= 10)
    {
        modolo = s % 10;
        cerontDigitSum = 1;
        for (i = 1; i <= modolo; i++)
        {
            cerontDigitSum = cerontDigitSum * i;
        }
        sum = sum + cerontDigitSum;
        s /= 10; // Update the value of s
    }
    // Calculate the factorial of the last digit
    cerontDigitSum = 1;
    for (i = 1; i <= s; i++)
    {
        cerontDigitSum = cerontDigitSum * i;
    }
    sum = sum + cerontDigitSum;
    if (s2 == sum)
    {
        return 1;
    }
    return 0;
}