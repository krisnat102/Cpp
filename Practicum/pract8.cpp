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

unsigned getPartOfNum(unsigned n, unsigned k) {
	unsigned mask = 0;

	for (int i = 0; i < k; i++) {
		mask += getPowerOfTwo(i);
	}

	return n & mask;
}

unsigned getLengthOfNum(int k) {
	int counter = 0;

	while (k > 0) {
		k = k >> 1;
		counter++;
	}
	return counter;
}

bool isNumApartOfNum(int n, int m) {
	int mask = getPartOfNum(n, getLengthOfNum(m));
	if (m == mask) return true;
	if (n == 0) return false;
	return isNumApartOfNum(n >> 1, m);
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

#pragma region Pointers
void swapPointers(int* m, int* n) {
	int* temp = m;
	m = n;
	n = temp;
}

void swapPointerValue(int* m, int* n) {
	int temp = *m;
	*m = *n;
	*n = temp;
}

void printArray(int* arr, size_t size) {
	while (size > 0) {
		std::cout << *arr;
		size--;
		arr++;
	}
}

void GetAtIndex(int* arr, size_t size) {

}
#pragma endregion



int main()
{
	//char str[] = "hello";
	int n, k;
	//std::cin >> n >> k;
	int arr[] = { 1 , 2 ,3 , 4, 5, 6, 70};
	printArray(arr, 7);
}