/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: 2022年04月05日 星期二 14时51分23秒
 ************************************************************************/

#include<stdio.h>
const int A = 10;
int a = 20;
static int b = 30;
int c;
int bar(int c, int d)
{
    int e = c + d;
    return e;
}

int foo(int a, int b)
{
    return bar(a, b);
}
int main()
{
    static int a = 40;
    char b[] = "Hello world !";
    register int c = 50;

    printf("Hello,World %d!\n", c);
    //foo(2,3);
    return 0;
}
