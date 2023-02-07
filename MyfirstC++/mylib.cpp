
#include <iostream>

#include "mylib.h"

using namespace std;

int test01 = 0;

char test02 = 'A';

float test03 = 2.3;

char *p01 = "?????";



//float test03 = 2.3;



int getmax(int x,int y)
{
    int test04;
    if(x > y) return x;
    else return y;
}

int cou()
{
    int value02;
    value02 = 1 + 2;
    return value02;
}

void pri_int ()
{
    cout << "輸出結果:" << test01 << "\n";
    cout << "輸出結果:" << test03 << "\n";
}

void pri_char01 ()
{
    cout << "輸出結果:" << test02 << "\n";

}

void pri_float ()
{
    cout << "輸出結果:" << test03 << "\n";

}

void pri_char02 ()
{
    cout << "輸出結果:" << p01 << "\n";

}
