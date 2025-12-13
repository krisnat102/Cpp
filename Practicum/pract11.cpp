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

char** initWordsMatrix(const char* str, char c)
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
    char** matrix = initWordsMatrix(str, c);

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

void printArr(const int* arr, size_t length)
{
    for (size_t i = 0; i < length; i++)
    {
        std::cout << arr[i] << ' ';
    }
    
}

void insertAt(int*& arr, size_t length, int index, int element) //5
{
    if (index > (length + 1)) return;

    int* temp = new int[length + 1];

    for (size_t i = 0; i <= length; i++)
    {
        if (i == index)
        {
            temp[i] = element;
            i++;
        }
        temp[i] = *arr;
        arr++;
    }
    arr = new int[length + 1];

    for (size_t i = 0; i <= length; i++)
    {
        arr[i] = temp[i];
    }

    delete[] temp;
}

void removeAt(int*& arr, size_t length, int index)
{
    if (index > length) return;

    int* temp = new int[length - 1];

    for (size_t i = 0; i < length; i++)
    {
        if (i == index)
        {
            arr++;
        }
        
        temp[i] = *arr;
        arr++;
    }
    arr = new int[length];

    for (size_t i = 0; i < length; i++)
    {
        arr[i] = temp[i];
    }

    delete[] temp;
}

#pragma region 6
int getNumLength(int i)
{
    int counter = 0;

    while (i > 0)
    {
        i /= 10;
        counter++;
    }

    return counter;
}

int tenToPow(int i)
{
    int res = 1;
    while (i > 0)
    {
        res *= 10;
        i--;
    }

    return res;
}

bool compareLex(size_t i, size_t j)
{
    if (i == 0 && j == 0) return true;
    int iLen = getNumLength(i), jLen = getNumLength(j), iPow = tenToPow(iLen - 1), jPow = tenToPow(jLen - 1), iFirstNum = (i - i % iPow) / iPow, jFirstNum = (j - j % jPow) / jPow;
    if (iFirstNum == jFirstNum) return compareLex(i%iPow, j%jPow);
    else return iFirstNum < jFirstNum;
}

void swap(size_t& i, size_t& j)
{
    size_t temp = i;
    i = j;
    j = temp;
}

void printArr(const size_t* arr, size_t length)
{
    for (size_t i = 0; i < length; i++)
    {
        std::cout << arr[i] << ' ';
    }
    
}

size_t* sortLex(size_t* nums, size_t count) //6
{
    for (size_t i = 0; i < count - 1; i++)
    {
        for (size_t j = 0; j < count - i - 1; j++)
        {
            if (!compareLex(nums[j], nums[j + 1]))
            {
                swap(nums[j], nums[j + 1]);
            }
        }
    }

    return nums;
}
#pragma endregion

#pragma region matrix
int** initMatrix(size_t rows, size_t cols)
{
    int** subarrays = new int*[rows];

    for (size_t i = 0; i < rows; i++)
    {
        subarrays[i] = new int[cols];
    }

    return subarrays;
}

int** transposeMatrix(int** matrix, size_t rows, size_t cols) //1
{
    int** trans = initMatrix(cols, rows);
    
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            trans[j][i] = matrix[i][j];
        }
    }
    
    return trans;
}

size_t* initNegativeCounter(size_t size)
{
    size_t* arr = new size_t[size];

    for (size_t i = 0; i < size; i++)
    {
        arr[i] = 0;
    }
    
    return arr;
}

size_t* getNegativeNumCount(int** matrix, size_t rows, size_t cols) //3
{
    size_t* negativeCounter = initNegativeCounter(rows);

    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            if (matrix[i][j] < 0) negativeCounter[i]++;
        }
    }
    
    return negativeCounter;
}

bool areMatrixesTheSame(const int** first, const int** second, size_t rows, size_t cols)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            if (first[i][j] != second[i][j]) return false;
        }
    }

    return true;
}
#pragma endregion


