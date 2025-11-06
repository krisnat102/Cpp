#include <iostream>

#pragma region Searches

int linearSearch(const int arr[], size_t size, int x) 
{
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == x) return i;
    }

    return -1;
}

int binarySearch(const int arr[], size_t size, int x) 
{
    size_t left = 0;
    size_t right = size - 1;

    while (left <= right) {
        size_t middle = left + (right - left) / 2;

        if (arr[middle] < x) {
            left = middle + 1;
        }
        else if (arr[middle] > x) {
            right = middle - 1;
        }
        else return middle;
    }

    return -1;
}
#pragma endregion

#pragma region Eratosthenes Sieve
void destroyNonPrime(bool arr[], size_t size, unsigned index) {
    for (size_t i = index * 2; i < size; i += index)
    {
        arr[i] = false;
    }
}

void isPrimeRange(bool arr[], size_t size) //Eratosthenes Sieve
{
    arr[0] = false;
    arr[1] = false;

    for (size_t i = 2; i < size; i++)
    {
        if (arr[i]) destroyNonPrime(arr, size, i);
    }
}

void initSieve(bool arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = true;
    }
}

void printPrimeArray(const bool arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i]) std::cout << i << ' ';
    }
}
#pragma endregion

#pragma region Grades
bool isValidGrade(int i)
{
    return i >= 2 || i <= 6;
}

void fillGrade(int arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        int input = 0;
        std::cin >> input;
        if (isValidGrade(input)) arr[input - 2]++;
    }
}
#pragma endregion

#pragma region Other
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

bool isPalindrome(const int arr[], size_t size) 
{
    for (size_t i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[size - 1 - i]) return false;
    }

    return true;
}

void reverseArray(int arr[], size_t size) 
{
    for (size_t i = 0; i < size / 2; i++)
    {
        swap(arr[i], arr[size - 1 - i]);
    }
}

void printArray(const int arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ';
    }
}
#pragma endregion

int main()
{
    bool arr[1025];
    initSieve(arr, 1025);
    isPrimeRange(arr, 1025);
    printPrimeArray(arr, 1025);
}