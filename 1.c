#include<stdio.h>
//#include<stdlib.h>

__attribute((always_inline))inline int ret()
{
    return 2;
}
void main()
{
    printf("%d",ret());
}
