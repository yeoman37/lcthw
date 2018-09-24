#include<stdio.h>
int main(int argc, char *argv[])
{
    int x =0x87654321;
    printf("%x\n",x);
    printf("%d\n",x);
    int o = 0x000000ff;
   int  xorx =x&o;
    printf("%x\n",xorx);
   int  second=0xff;
   int  two=x^~second;
   printf("%x\n",two);
   int three=0xff;
   int third=x|three;
    printf("%x\n",third);
 return 0;
}
