#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
struct person{
    char *name;
    int age;
    int loser;};
 
struct person *creat_person(char *name, int age, int loser){
    struct person *who=malloc(sizeof(struct person));
    assert(who!=NULL);
    who->name = strdup(name);
    who->age=age;
    who->loser=9;
    return who;}
void person_destroy(struct person *who)
{assert(who!=NULL);
free(who->name);
free(who);}

void print_person(struct person *who)
{printf("Name:%s\n",who->name);
printf("Age:%d\n",who->age);}

int main(int argc,char *argv[])
{  struct person *joe=creat_person("joe biden",34,4);
printf("joe is at memory %p\n",joe);

print_person(joe);
joe->age =29;
print_person(joe);
person_destroy(joe);}
 
