
#ifndef mylib.h

#define mylib.h

#define Word "Test01 is test02."

#endif // mylib

extern int test01;

extern char test02;

extern float test03;

extern char *p01;

static int test04;

struct Test05
{
    char a[10];
    int b;
    float c;
    int d[10];
};

int getmax(int x,int y);

int cou();

void pri_int ();

void pri_char01 ();

void pri_float ();

void pri_char02 ();
