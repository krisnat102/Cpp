#include <iostream>

void swap(int& a, int& b){
    int c = a;
    a = b;
    b = c;
}

void swap(double& a, double& b){
    double c = a;
    a = b;
    b = c;
}

char toUpper(char c){
    return c - 'a' - 'A';
}

char toLower(char c){
    return c + 'a' - 'A';
}

void sort3(int& min, int& mid, int& max){
    if (min > mid) swap(min, mid);
    if (mid > max) swap(mid, max);
    if (min > mid) swap(min, mid);
}

void studentValidation(int& age, int& studentID){
    if (age < 15 || age > 100) age = 15;
    if (studentID < 10000 || studentID > 99999) studentID = 10000;
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

void fractionSimplifier(int& numerator, int& denominator){
    int a = gcd(numerator, denominator);
    numerator /= a;
    denominator /= a;
}

int power(unsigned n, unsigned k){
    int result = 1;
    for (int i = 0; i < k; i++)
    {
        result *= n;
    }

    return result;
}

int getLength(unsigned n){
    int counter = 0;
    while (n > 0){
        n /= 10;
        counter++;
    }

    return counter;
}

void swapSpecificDigit(int& n, int& m, int k){
    int numToGetN = getLength(n) - k;
    int numToGetM = getLength(m) - k;

    int powN = power(10, numToGetN);
    int powM = power(10, numToGetM);

    int nNumToSwap = (n / powN) % 10;
    int mNumToSwap = (m / powM) % 10;

    int difference = nNumToSwap - mNumToSwap;

    n -= difference * powN;
    m += difference * powM;
}

void numberSeperator(int n, int& num1Result, int& num2Result){
    bool isEven = false;
    int nLength = getLength(n);
    for (int i = 0; i < nLength; i++){
        if(isEven) num1Result += (n % 10) * power(10, i);
        else num2Result += (n % 10) * power(10, i);
    }
}

int main(){
    int a, b, k;
    std :: cin >> a >> b >> k;
    swapSpecificDigit(k, b, a);
    std :: cout << a << " " << b;
}