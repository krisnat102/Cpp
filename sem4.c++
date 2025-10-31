#include <iostream>

void getMinAndMaxDigit(int num, int& min, int& max){
    min = 9;
    max = 0;

    if (num == 0){
        min = 0;
        return;
    }

    while (num != 0){
        int a = num % 10;

        if (a > max) max = a;
        if (a < min) min = a;

        a /= 10;
    }
}

int main(){
    int min, max, input;
    std :: cin >> input;
}