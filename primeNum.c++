#include <iostream>
#include <cmath>

int main(){
    int a;
    std :: cin >> a;

    int aSqrt = std::sqrt(a);

    //for (int i = 2; i < sqrt(a); i++) having sqrt(a) there slows down the program massively
    for (int i = 2; i < aSqrt; i++)
    {
        if (a % i == 0) {
            std :: cout << a << " isnt prime and its divisible by " << i;
            return 0;
        }
    }

    std :: cout << a << " is prime";
}