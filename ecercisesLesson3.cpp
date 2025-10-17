#include <iostream>
#include <cmath>

int main(){
    //1
    /*int input;

    std :: cin >> input;

    for (int i = 1; i <= input; i++)
    {
        for (int j = 1; j <= i; j++){
            std :: cout << j;
        }
        std :: cout << std :: endl;
    }*/
    
    //2

    /*int input;

    std :: cin >> input;

    for (int i = 1; i < input; i++)
    {
        std :: cout << i << " + " << input - i << " = " << input << std :: endl;
    }*/

    //3

    /*int input;

    std :: cin >> input;

    long long factoriel = 1;

    for (int i = 1; i <= input; i++)
    {
        factoriel *= i;
    }

    std :: cout << factoriel;*/

    //4

    /*int input;

    std :: cin >> input;

    int sumOfNums = 0;

    while (input > 0){
        sumOfNums += input % 10;
        input /= 10;
    }

    std :: cout << sumOfNums;*/

    //5

    /*int sumOfAllNums = 0;

    for (int i = 100; i <= 999; i++)
    {
        int sumOfNums = 0;
        
        int numForSum = i;

        while (numForSum > 0){
            sumOfNums += numForSum % 10;
            numForSum /= 10;
        }

        if (sumOfNums < 10) continue;

        int sumSqrt = sqrt(sumOfNums);
        bool isPrime = true;

        for (int j = 2; j <= sumSqrt; j++)
        {
            if (sumOfNums % j == 0) isPrime = false;
        }

        if (isPrime) sumOfAllNums += i;
    }

    std :: cout << sumOfAllNums;*/

    //6

    /*int inputN, inputM;
    
    std :: cin >> inputN >> inputM;

    if (inputN > inputM){
        int temp = inputN;
        inputN = inputM;
        inputM = temp;
    }

    int sum = 0;

    for (int i = inputN; i <= inputM; i++)
    {
        int iSqrt = sqrt(i);
        bool isPrime = true;

        for (int j = 2; j <= iSqrt; j++)
        {
            if (i % j == 0) isPrime = false;
        }

        if (isPrime) sum += i;
    }
    
    std :: cout << sum;*/

    //7

    /*int input1, input2;

    std :: cin >> input1 >> input2;

    if (input1 > input2){
        int temp = input1;
        input1 = input2;
        input2 = temp;
    }

    if (input1 < 0 || input2 > 255) return 0;

    for (int i = input1; i <= input2; i++){
        std :: cout << (char) i << std :: endl;
    }*/

    //8

    /*int input;

    std :: cin >> input;

    std::cout << 0;

    if (input == 0) return 0;

    std::cout << " " << 1 << " ";

    if (input == 1) return 0;
    
    int previousNum = 0;
    int currentNum = 0;
    int newNum = 1;

    for (int i = 2; i < input; i++){
        currentNum = newNum;
        newNum = currentNum + previousNum;
        std :: cout << newNum << " ";
        previousNum = currentNum;
    }*/
}