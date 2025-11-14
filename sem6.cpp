#include <iostream>

#pragma region Number System
unsigned convertToBinary(unsigned n) 
{
    unsigned res = 0;
    unsigned mult = 1;

    while (n != 0) 
    {
        if (n % 2)
        {
            res += mult;
        }

        mult *= 10;
        n /= 2;
    }

    return res;
}

unsigned convertFromBinaryToDecimal(unsigned n) 
{
    unsigned res = 0;
    unsigned mult = 1;

    while (n != 0)
    {
        res += (n % 10) * mult;
        mult *= 2;
        n /= 10;
    }

    return res;
}

unsigned getSymbolValue(char ch)
{
    if (ch >= '0' && ch <= '9') 
    {
        return ch - '0';
    }

    if (ch >= 'A' && ch <= 'Z') 
    {
        return ch - 'A' + 10;
    }

    return -1;
}

unsigned getSymbolFromValue(unsigned n)
{
    if (n <= 9)
    {
        return n + '0';
    }

    if (n <= getSymbolValue('Z'))
    {
        return n + 'A' - 10;
    }

    return -1;
}

unsigned convertFromKToDecimal(const char num[], size_t size, unsigned k)
{
    unsigned res = 0;
    unsigned mult = 1;

    for (int i = size - 1; i >= 0; i--) 
    {
        res += getSymbolValue(num[i]) * mult;
        mult *= k;
    }

    return res;
}

void convertFromDecimalToK(unsigned num, char res[], size_t size, unsigned k)
{
    while (size > 0)
    {
        res[--size] = getSymbolFromValue(num % k);
        num /= k;
    }
}

void convertFromBaseKToBaseP(const char baseKNum[], size_t kSize, unsigned k, char res[], size_t pSize, unsigned p) 
{
    unsigned dec = convertFromKToDecimal(baseKNum, kSize, k);
    convertFromDecimalToK(dec, res, pSize, p);
}
#pragma endregion

void printArr(const char arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i];
    }
}

int main()
{
    const char num[] = { '5', '2', '6'};
    char res[3];
    convertFromBaseKToBaseP(num, 3, 8, res, 3, 10);
    printArr(res, 3);
}