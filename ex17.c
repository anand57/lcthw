#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define MAX_DATA 512;
#define MAX_ROWS 100;

struct Address{
  int id;
  int set;
  char name[MAX_DATA];
  char email[MAX_DATA];
};

struct Database{
  struct Address rows[MAX_ROWS];
};

struct Connection{
  FILE *file;
  struct Database *db;
};


void die(const char *message){
  if (errno){
    perror(message);
  }else {
    printf("ERROR: %s\n",message);
  }
  exit(1);
}

void Address_print(struct Address *addr){
  printf("%d, %s %s", addr->id, addr->set, addr->email);
}

struct Connection *Database_open(const char *filename, char mode){
  struct Connection *conn = malloc(sizeof(struct Connection));

  if(!conn){
    die("Memory Error");
  }
  if(mode == 'c'){
    conn->file = fopen(filename,"w");
  }else{
    conn->file = fopen(filename, "r+");

    if (conn->file){
      Database_load(conn);
    }

  }

}

void Database_close(struct Connection *conn){
  if(conn){
    if(conn->file){
      fclose(conn->file);
    }
    if(conn->db){
        free(conn->db);
        free(conn);
    }
  }

  void Database_write(struct Connection *conn)
}
