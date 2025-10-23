#include <iostream>

int reverse(unsigned int num){
    int result = 0;

    while (num > 0){
        result *= 10;
        result += num % 10;
        num /= 10;
    }

    return result;
}

int main(){
    int num = 0;
    std :: cin >> num;

    std :: cout << reverse(num);
}
