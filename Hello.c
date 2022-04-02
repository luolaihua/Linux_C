/*************************************************************************
	> File Name: Hello.c
	> Author: 
	> Mail: 
	> Created Time: 2022年03月28日 星期一 17时08分20秒
 ************************************************************************/
#include"ref.h"

#include<stdio.h>
//extern int n;
int main()
{
    int a = F(2);
    int b = G(3);
    int x = 4;
    int y = 6;
    int z1 = ABS1(x-y);
    int z2 = ABS2(x-y);
    int i = 0, arr[4] ={ 2,4,6,8};
    int r = MAX(arr[i++],1);
    printf("Hello World!\n");
    printf("a = %d\n",r);
    printf("b = %d\n",z2);
    return 0;
}

