#include <iostream>
#include <math.h>
#include <cmath>

bool isPrime(unsigned int num){
    if (num <= 1){
        return false;
    }

    double numSqrt = sqrt(num);

    for (int j = 2; j <= numSqrt; j++)
    {
        if (num % j == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int n = 0;
    std :: cin >> n;

    for (int i = 0; i < n; i += 6)
    {
        int firstNum = i - 1;
        int secondNum = i + 1;

        if (isPrime(firstNum) && isPrime(secondNum)) std :: cout << firstNum << " " << secondNum << " ";
    }
}
