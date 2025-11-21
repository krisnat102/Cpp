#include <iostream>

#pragma region Bit Operations
unsigned getPowerOfTwo(unsigned k) 
{
	return 1 << k; //if overflows it returns 0
}

bool getBitValue(unsigned n, unsigned i) {
	if (i > 31) return false;

	unsigned mask = 1 << i;

	return (mask & n) == mask;
}

unsigned setBitToZero(unsigned n, unsigned i) {
	if (i > 31) return n;

	unsigned mask = ~(1 << i);

	return mask & n;
}

unsigned setBitToOne(unsigned n, unsigned i) {
	if (i > 31) return n;

	unsigned mask = 1 << i;

	return mask | n;
}

unsigned flipBit(unsigned n, unsigned i) {
	if (i > 31) return n;

	unsigned mask = 1 << i;

	return mask ^ n;
}
#pragma endregion

#pragma region Strings
unsigned strLength(char* str) 
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		counter++;
	}
	return counter;
}
#pragma endregion


int main()
{
	char str[] = "hello";
	std::cout << strLength(str);
}