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
    cout << "�Ƶ{�����աG" << value01 << "\n";
    cout << "�п�J��ӥ����\n";
    cin >> a;
    cin >> b;

    int max;

    max = getmax(a, b);
    cout << "�̤j�ȬO�G" << max << endl;

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
    cout << "���L�줸�ռơG" << sizeof(bool) << "\n";
    cout << "�o�O�r���줸�ռơG" << sizeof(char) << "\n";
    cout << "�o�O�u��Ʀ줸�ռơG" << sizeof(short) << "\n";
    cout << "�o�O��Ʀ줸�ռơG" << sizeof(int) << "\n";
    cout << "�o�O����Ʀ줸�ռơG" << sizeof(long) << "\n";
    cout << "�o�O�B�I�Ʀ줸�ռơG" << sizeof(float) << "\n";
    cout << "�o�O����B�I�Ʀ줸�ռơG" << sizeof(double) << "\n";
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
    cout << "�o�O���յ{��\n";
    return 0;
}
*/

double mysine(int degree)
{
    double  d;
    d = sin((dPi/180.0)/degree);
    return d;
}

