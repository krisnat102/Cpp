#include <iostream>

int toPow(unsigned int n,unsigned int k){
    if (n == 0 && k == 0) return -1;
    
    int result = 1;
    for (int i = 0; i < k; i++)
    {
        result *= n;
    }
    
    return result;
}

int main(){
    int n, k;
    std :: cin >> n >> k;

    std :: cout << toPow(n, k);
}