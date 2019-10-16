#include <stdio.h>
#include <string.h>
#include <assert.h>

struct Pizza{
  int temp;
  int radius;
  char* description;
};

struct Pizza *Pizza_create(int temp, int radius, char* description){
  struct Pizza *myPizza = malloc(sizeof(struct Pizza));

  assert(myPizza != NULL);

  myPizza->temp = temp;
  myPizza->radius = radius;
  myPizza->description = strdup(description);

  return myPizza;
}


void Person_destroy(struct Pizza *who){
  assert( who != NULL);

  free(who->name);
  free(who);
}


int main(int argc, char *argv[]){
  struct Pizza *myPizzaPtr = Pizza_create(10,23,"Vegetarian");
  struct Pizza *myOtherPizzaPtr = Pizza_create(10,23,"Meat Lovers");


  printf("Pizza one is a %s\n", myPizzaPtr->description);
  printf("Pizza two is %s\n", myOtherPizzaPtr->description);

  return 0;

}
