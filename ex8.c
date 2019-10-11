#include <stdio.h>

int main(int argc, char* argv[]){

    if(argc == 1){
      printf("You didn't supply any arguments, Jackass");
    }
    else if(argc > 1 && argc < 4){
      printf("Here are your arguments:");
      for(int i = 0; i < argc; i++){
        printf("> %s\n",argv[i]);
      }
      printf("----------------------");
    }
    else{
      printf("Too many Argz\n");
    }
}
