#include <iostream>

#pragma region Strings

#pragma region Core
unsigned strLength(char* str) 
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		counter++;
	}
	return counter;
}

void strCpy(const char* src, char* dest)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';
}

int strCmp(const char* first, const char* second) 
{
	while (*first == *second && *first && *second) // *first *second return false only when they are '\0'
	{
		first++;
		second++;
	}
	return *first - *second;
}

void strCat(const char* src, char* dest)
{
	size_t len = strLength(dest);
	dest += len;
	strCpy(src, dest);
}

unsigned strToNum(const char* src)
{
	unsigned res = 0;

	while (*src)
	{
		res += *src - '0';
		res *= 10;
		src++;
	}

	return res;
}

void strReverse(char* src) 
{

}

void numToStr(unsigned num, char* dest)
{
	while (num > 0)
	{
		unsigned n = num % 10;
		*dest = n;
		num /= 10;
	}

	strReverse(dest);
}

bool isPrefix(const char* text, const char* prefix)
{

}

bool findInText(const char* text, const char* pattern)
{

}
#pragma endregion

#pragma endregion



int main()
{
}