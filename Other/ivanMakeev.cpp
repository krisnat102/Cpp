#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    //1
    // cout << "Oh what" << endl << "a happy day!" << endl << "oh yes" << endl << "what a happy day"; 

    //2
    /*int p = 5 * 2 + 4 * 2;
    cout << p << endl;

    p = 7 * 2 + 9 * 2;
    cout << p << endl;*/

    //3
    /*float lv = 0;

    cin >> lv;
    cout << lv * 1.95 << " euro" << endl << lv * 1.8 << " dlrs";*/

    //4
    /*float a, b;
    cout << "pls enter one side" << endl;
    cin >> a;
    cout << "other side" << endl;
    cin >> b;

    cout << "p is: " << a * 2 + b * 2 << " s is " << a * b;*/

    //5
    /*float a,b;
    
    cin >> a >> b;
    cout << a < b;

    //6
    /*int a,b;

    cin >> a >> b;
    cout << a % b << endl << a / b;*/

    //7
    /*int apples, pears, bananas;
    cout << "apples: ";
    cin >> apples;
    cout << "pears: ";
    cin >> pears;
    cout << "bananas: ";
    cin >> bananas;

    cout << "Pesho, don’t forget to buy " << apples << " apples " << pears << " pears " << bananas << " bananas ";*/

    //8
    /*float r;
    cin >> r;

    cout << "d is " << r * 2 << endl << "s is " << r * r * 3.14159265;*/

    //9
    /*int a,b,c;
    cin >> a >> b >> c;
    float d = sqrt(b * b - 4*a*c);
    float x1, x2;
    if (d < 0) 
    {
        cout << "no roots found";
    }
    else if (d > 0)
    {
        cout << "x1 is " << (-b+d)/2*a << endl << "x2 is " << (-b-d)/2*a;
    }
    else cout << "x is " << -b/2*a;*/

    //10
    /*int a,b,c;
    cin >> a >> b;

    c = a;
    a = b;
    b = c;

    cout << "a is " << a << " b is " << b;*/

    //11
    /*int a, b;
    cin >> a >> b;

    if (a >= b) cout << a;
    else cout << b;*/

    //12
    /*long secs;
    cin >> secs;
    long mins = (secs / 60) % 60;
    int hours = (secs / 60 /60) % 24;
    int days = secs /24 /60 /60;

    cout << days << " days " << hours << " hours " << mins << " mins " << secs % 60 << " seconds";*/

    //13
    /*int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    cout << setprecision(3) << sqrt((a2 - a1) * (a2 - a1) + (b2 - b1) * (b2 - b1));*/

    //14

    //15
    /*int n, sum;
    cin >> n;

    for (int i = 0; i <= n; i++){
        if (i % 3 == 0) sum += i;
    }

    cout << sum;*/

    //16
    /*int a, b;
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << endl << b;*/

    //17
    /*int a {};
    int b {};

    cin >> a >> b;

    std :: cout << std :: min(a , b) << " is the smallest num";*/

    
}
