#include<stdio.h>
int main(int argc, char *argv[])
{
    if(argc!=2){
    printf("Error:You need one argument.\n");
    return 1;
}
    int i = 0;
    for(i=0;argv[1][i]!='\0';i++){
    char letter = argv[1][i];
    switch(letter){
        case 'a':
        case 'A':
        printf("%d:'A'\n",i);break;
        case 'e':
        case 'E':
        printf("%d:'E'\n",i);break;
        case 'y':
        case 'Y':
          if(i>2){printf("%d:'Y'\n",i);
}break;
    default:printf("%d:%cis not a vowel\n",i,letter);
}}
return 0;
}
