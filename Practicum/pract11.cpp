#include <iostream>

int* merge(const int* first, size_t firstSize, const int* second, size_t secondSize) //1
{
    int* result = new int[firstSize + secondSize];
    int* put = result;
    while (firstSize > 0 && secondSize > 0)
    {
        if (*first <= *second)
        {
            *put = *first;
            first++;
            firstSize--;
        } 
        else
        {
            *put = *second;
            second++;
            secondSize--;
        }
        put++;
    }

    while (firstSize > 0)
    {
        *put = *first;
        first++;
        put++;
        firstSize--;
    }
    while (secondSize > 0)
    {
        *put = *second;
        second++;
        put++;
        secondSize--;
    }

    return result;
}

void divideArrayByIndex(int*& arr, size_t size, int index) //2
{
    int* temp = new int[size];
    int num = arr[index];
    int rightCounter = 1, leftCounter = 0;

    for (size_t i = 0; i < size; i++)
    {
        if (num >= arr[i])
        {
             temp[leftCounter] = arr[i];
             leftCounter++;
        }
        else 
        {
            temp[size - rightCounter] = arr[i];
            rightCounter++;
        }
    }
    
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }

    delete[] temp;
}

int getMaxWordSize(const char* str, char c) //3
{
    int counter = 0;
    int maxCounter = 0;
    int get = 0;
    while (str[get])
    {
        if (str[get] == c) counter = 0;
        else
        {
            counter++;
            if (counter > maxCounter) maxCounter = counter;
        }

        get++;
    }

    return maxCounter;
}

int getWordCount(const char* str, char c)
{
    int counter = 0;
    int letterCounter = 0;
    int get = 0;
    while (str[get])
    {
        if (str[get] == c && letterCounter > 0)
        {
            counter++;
            letterCounter = 0;
        } 
        else if (str[get] != c) letterCounter++;
        get++;
    }

    if (letterCounter > 0) counter++; 

    return counter;
}

char** initMatrix(const char* str, char c)
{
    int wordCount = getWordCount(str, c);
    char** matrix = new char*[wordCount];
    
    int maxWordSize = getMaxWordSize(str, c);

    for (size_t i = 0; i < wordCount; i++)
    {
        matrix[i] = new char[maxWordSize + 1];
    }

    return matrix;
}

char** splitWord(const char* str, char c)
{
    char** matrix = initMatrix(str, c);

    int get = 0;
    int putRow = 0;
    int putColumn = 0;

    while (str[get])
    {
        if (str[get] == c)
        {
            matrix[putRow][putColumn] = '\0';
            putRow++;
            putColumn = 0;
        }
        else
        {
            matrix[putRow][putColumn] = str[get];
            putColumn++;
        } 
        
        get++;
    }

    return matrix;
}

