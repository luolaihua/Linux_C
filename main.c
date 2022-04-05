/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: 2022年04月04日 星期一 14时23分42秒
 ************************************************************************/

#include<stdio.h>

int add_range(int low, int high)
{
    
    int i, sum;
    //int i=0, sum=0;
    for(i = low; i <= high; i++)
        sum = sum + i;
    return sum;
}
int main()
{
    int result[100];
    result[0] = add_range(1,10);
    result[1] = add_range(1,100);
    int a=0;
    a = (++a)+(++a)+(++a)+(++a);
    printf("a = %d\n",a);
    printf("result[0] = %d \n result[1] = %d\n",result[0],result[1]);
    return 0;
}
