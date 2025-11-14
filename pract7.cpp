#include <iostream>

#pragma region Number System
int convertToBinary(int n)
{
    int res = 0;
    int mult = 1;

    while (n > 0) 
    {
        res += (n % 2) * mult;
        mult *= 10;
        n /= 2;
    }

    return res;
}

int countBinaryOnes(int n) 
{
    int count = 0;

    while (n > 0)
    {
        if (n % 2 == 1) count++;
        n /= 2;
    }
    return count;
}

unsigned convertFromKToDecimal(const char num[], size_t size, unsigned k)
{
    unsigned res = 0;
    unsigned mult = 1;

    for (int i = size - 1; i > 0; i--)
    {
        res += num[i] * mult;
        mult *= k;
    }

    return res;
}
#pragma endregion

#pragma region Helper Methods
void printArr(const char arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i];
    }
}
#pragma endregion

int main()
{
    char arr[] = { '5', '2', '6' };
    std::cout << convertFromKToDecimal(arr, 3, 8);
}