/*************************************************************************
	> File Name: stack.c
	> Author: 
	> Mail: 
	> Created Time: 2022年04月05日 星期二 16时51分57秒
 ************************************************************************/

#include<stdio.h>

char stack[512];
int top = -1;
void push(char c)
{
    stack[++top] = c;
}

char pop(void)
{
    return stack[top--];
}

int is_empty(void)
{
    return top == -1;
}
