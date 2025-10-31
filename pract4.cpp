#include <iostream>
#include <cmath>

int abs(int n){
    return n < 0 ? n * -1 : n;
}

bool isDigit(char c){
    return c < 'A';
}

char toUpper(char c){
    if(c < 'a' || c > 'z') return c;
    return c - ('a' - 'A');
}
char toLower(char c){
    if(c < 'A' || c > 'Z') return c;
    return c + ('a' - 'A');
}

int toNumber(char c){
    if (c < '0' || c > '9') return -1;
    return c - '0';
}

int power(unsigned n, unsigned k){
    int result = 1;
    for (int i = 0; i < k; i++)
    {
        result *= n;
    }

    return result;
}

char toChar(unsigned int c){
    if (c > 9) return 0;
    return c + '0';
}

int gcd(unsigned first, unsigned second){
    if (first > second){
        int n = first;
        first = second;
        second = n;
    }

    int result = 0;

    for (int i = 2; i <= first / 2; i++)
    {
        if (first % i == 0 && second % i == 0) result = i;
    }
    return result;
}

int lcm(unsigned first, unsigned second){
    int keeperFirst = first;
    int keeperSecond = second;

    while (first != second){
        if (first < second) first += keeperFirst;
        else if (second < first) second += keeperSecond;
    }

    return first;
}

bool isPrime(unsigned n){
    int nSqrt = sqrt(n);

    for (int i = 2; i <= nSqrt; i++)
    {
        if (n % i == 0) return false;
    }

    return true;
}

int getLength(unsigned n){
    int counter = 0;
    while (n > 0){
        n /= 10;
        counter++;
    }

    return counter;
}

int getDigitOnPosition(int n ,int k){
    int numToRemove = getLength(n) - k;
    if (numToRemove < 0) return -1;

    for (int i = 0; i < numToRemove; i++)
    {
        n /= 10;
    }

    return n % 10;
}

int calculate(int first, int second, char c){
    switch (c)
    {
    case '-':
        return first - second;
    case '*':
        return first * second;
    case '/':
        return first / second;
    case '%':
        return first % second;
    default:
        return first + second;
    }
}

int concat(int first, int second){
    int lengthSecond = getLength(second);

    first *= power(10, lengthSecond);

    return first + second;
}

int gcdOfRow(unsigned n){
    if (n < 2) return -1;

    int input1, input2;

    bool tracker = false;

    std::cin >> input1 >> input2;

    int gcdKeeper = 0;

    for (int i = 0; i < n; i++)
    {
        if (tracker) std::cin >> input1;
        else std::cin >> input2;
        
        tracker = !tracker;
    }
    
}

int main(){
    int input1, input2;
    std::cin >> input1 >> input2;
    std::cout << gcd(input1, input2);
}