#include <stdio.h>

int main(int argc, char *argv[])
{
    int sum=0;

    for(int i=1; i<=100; i++)
        sum+=i;

    printf("1+2+3+...+100=%d\n", sum);
    return 0;
}
