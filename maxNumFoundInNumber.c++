#include <iostream>

int main(){
    int a;

    std :: cin >> a;

    int maxD = 0;
    int maxCount = 0;

    for (int i = 0; i <= 9; i++)
    {
        int count = 0;
        int tempA = a;

        while (tempA != 0){
            if (tempA % 10 == i) count++;
            tempA /= 10;
        }

        if (count > maxCount){
            maxCount = count;
            maxD = i;
        }
    }

    std :: cout << maxD;
    
}