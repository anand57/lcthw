#include <stdio.h>

int main(int argc, char* argv[]){
  short int distance = 4294967297;
  float power = 2.345f;
  double super_power = 2342342.2342342;
  char initial = 'A';
  char first_name[] = "Anand";
  char last_name[] = "V";

  printf("You are %d miles away\n", distance);
  printf("You have a power level of %f\n", power);
  printf("You have %f awesome super powers\n", super_power);
  printf("You have an inital %c\n", initial);
  printf("Your first name is %s\n", first_name);
  printf("Your last name is %s\n", last_name);

  return 0;

}
