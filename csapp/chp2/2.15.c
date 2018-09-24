#include<stdio.h>
int main(int argc,char *argv[])
{    
    int equal(int x, int y)
     { int e=x^y;
       int f=!e;
      return f;}
    int m=equal(5,5);
    printf("%d,\n",m);
    return 0;}
