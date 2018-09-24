#include<stdio.h>
#include<assert.h>
#include<errno.h>
#include<string.h>
#define MAX_DATA 512
#define MAX_ROWS 100
struct Address{
    int id;
    int set;
    char name[MAX_DATA];
    char email[MAX_DATA];};

struct Database{
    struct Address rows[MAX_ROWS];};

struct Connection{
    FILE *file;
    struct Database *db;};

void die(const char *message)
{
    if(errno){perror(message);}
    else{printf("ERROR:%s\n",message);}
    exit(1);}
void Address_print(struct Address *addr)
{printf("%d %s %s\n",addr->id,addr->name,addr->email);}

void Database_load(struct Connection *conn)
{ int rc=fread(conn->db,sizeof(struct Datbase),1,conn->file);
  if(rc!=1)die("failed to load datbase");}

struct Connection *Database_open(const char *filename,char mode)
{ struct Connection *conn = malloc(sizeof(struct Connection));
if(!conn)die("Memory error");  
conn->db = malloc(sizeof(struct Database));
if(!conn->db)die("Memory error");
if(mode=='c'){ conn->file = fopen(filename,"w");
}else{conn->file = fopen(filename,"r+");
  if(conn->file){Database_load(conn):}}}
  if(!conn->file)die("failed to open the file");
  return conn;}
