#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
  char* myStr1 = "Hello World\n";
  char *myStr2 = strdup(myStr1);

  myStr1 = "Fuck you\n";

  printf("My str 2 is %s \n", myStr2);
  printf("myStr1 pointer is located at %p\n", myStr1);
  printf("myStr2 Pointer is located at %p\n", myStr2);
  printf("%c\n",&myStr1);
  printf("%c\n",&myStr2);

  return 0;
}
