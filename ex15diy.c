#include<stdio.h>
int main(int argc, char *argv[])
{
    int ages[] = {23,34,45,56};
    char *names[] ={"french","england","spain","holland"};
    //safely get the size of ages
    int count=sizeof(ages)/sizeof(int);
    int i =0;
    printf("1.first way using index\n");

    for(i=0;i<count;i++){
        printf("%s has %d years alive.\n",names[i],ages[i]);}
        
    printf("2.setup the pointers to the start of the arrays.\n");
    int *cur_ages=ages;
    char **cur_name = names;
