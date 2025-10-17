#include <iostream>

int main(){
    int a, b;
    std :: cin >> a >> b;

    if (a < b){
        int temp = a;
        a = b;
        b = a;
    }

    while (b != 0){
        int res = a % b;
        a = b;
        b = res;
    }

    std :: cout << a;
}