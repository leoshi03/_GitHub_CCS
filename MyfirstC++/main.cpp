#include <iostream>
#include <math.h>
#include "mylib.h"
using namespace std;

const double dPi = 3.14159265359;

double mysine(int degree);

const char z[] = {0x00,0x20,0x45};
const char y[] = {"ABC"};

//int getmax(int x,int y);
//int you_name();

int main()
{
    int a = 0, b = 0, j = 0;
    double  dsine;

    /*int value01;
    value01 = cou();
    cout << "副程式測試：" << value01 << "\n";
    cout << "請輸入兩個正整數\n";
    cin >> a;
    cin >> b;

    int max;

    max = getmax(a, b);
    cout << "最大值是：" << max << endl;

    for (j = 0; j <= 90; j++)
    {
        dsine = mysine(j);
        cout << "sin( " << j << " } = " << dsine << endl;
    }
    */

    cout << z[1] << "\n";
    cout << y << "\n";
    struct Test05 Test06 = {"CD",0,1.0,{0,1,2,3,4}};
    struct Test05 *Test07 = &Test06;
    Test06.a[3] = 'A';
    Test06.b = 100;
    Test06.c = 200.3;
    Test06.d[3] = 300;
    cout << Test06.a[3] << "\n";
    cout << Test06.d[3] << "\n";
    cout << "布林位元組數：" << sizeof(bool) << "\n";
    cout << "這是字元位元組數：" << sizeof(char) << "\n";
    cout << "這是短整數位元組數：" << sizeof(short) << "\n";
    cout << "這是整數位元組數：" << sizeof(int) << "\n";
    cout << "這是長整數位元組數：" << sizeof(long) << "\n";
    cout << "這是浮點數位元組數：" << sizeof(float) << "\n";
    cout << "這是雙精浮點數位元組數：" << sizeof(double) << "\n";
    test04 = 8;
    cout << test04 << "\n";
    b = j + 2;
    j++;
    b = b * 3;
    a = b * j;
    cout << a << "\n";

    a = cou();

    cout << a << "\n";

    pri_int ();

    pri_char01 ();

    pri_float ();

    pri_char02 ();

    cout << Word << "\n";

    test03 = test03 + 2;

    cout << test03 << "\n";

    return 0;
}

/*
int getmax(int x,int y)
{
    if(x > y) return x;
    else return y;
}


int you_name()
{
    cout << "這是測試程式\n";
    return 0;
}
*/

double mysine(int degree)
{
    double  d;
    d = sin((dPi/180.0)/degree);
    return d;
}

