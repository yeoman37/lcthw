#include<stdio.h>
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start,int len){
int i;
for(i=0;i<len;i++)
   {printf("%.2x",start[i]);
    }}

void show_int(int x){
    show_bytes((byte_pointer)&x,sizeof(int));}

void show_float(float x){
    show_bytes((byte_pointer)&x,sizeof(float));}

void show_pointer(void *x){
    show_bytes((byte_pointer)&x,sizeof(void *));}
int main(int argc,char *argv[]){
   int i =12345;
   int *pi =&i;
   show_pointer(pi);
   show_int(12345);
   printf("\n");
   float fi =(float)i;
   show_float(fi); 
   return 0;}
