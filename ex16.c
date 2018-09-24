#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
struct person{
    char *name;
    int age;
    int height;
    int weight;};
struct person *person_creat(char *name,int age, int height,int weight){
    struct person *who=malloc(sizeof(struct person));
    who->name =strdup(name);
    who->age =age;
    who->height =height;
    who->weight =weight;
    return who;}

void person_destroy(struct person *who){
    assert(who!=NULL);
    free(who->name);
    free(who);
    }
void person_print(struct person *who)
{    printf("Name:%s\n",who->name);
     printf("\tAge:%d\n",who->height);

     printf("\tHeight:%d\n",who->height);
     printf("\tWeight:%d\n",who->weight);
}
    int main(int argc,char *argv[]){
        struct person *joe=person_creat(
              "joe alex",32,23,345);
        struct person *frank =person_creat(
              "franek blank",20,72,18888);
    printf("joe is at location %p:\n",joe);
    person_print(joe);
    printf("frank is at memory %p:\n",frank);
    person_print(frank);
    //make everyone age 20 years an print them again
    joe->age+=20;
    joe->height-=2;
    joe->weight+=40;
    person_print(joe);
    person_destroy(joe);
    return 0;}
