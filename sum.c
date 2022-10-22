#include <stdio.h>
int main()
{
    int a[10]={3, 4, 5, 69, 54, 1};
    int i, sum=0;
    for(i = 0; i < 10; i++)
        sum += a[i];
    printf("Sum= %d\n", sum);
    return 0;
}