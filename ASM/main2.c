/*************************************************************************
	> File Name: main2.c
	> Author: 
	> Mail: 
	> Created Time: 2022年04月05日 星期二 16时54分47秒
 ************************************************************************/
#include"stack.h"
#include<stdio.h>

int a, b = 1;

int main(void)
{
    push('a');
    push('b');
    push('c');
    while(!is_empty())
        putchar(pop());
    putchar('\n');
    return 0;
}
