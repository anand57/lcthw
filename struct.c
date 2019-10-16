#include <stdio.h>

enum Colors{RED, YELLOW, BLUE};

int main()
{
    enum Colors myFavorite = RED;
    printf("%d",myFavorite);
    return 0;
}

int addNumbers(int a,int b){
  return a+b;
}
