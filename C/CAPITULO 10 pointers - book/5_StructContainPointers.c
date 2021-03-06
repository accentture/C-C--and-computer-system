#include <stdio.h>

int main(void){
  struct integerPointers {
    int *p1;
    int *p2;
  };

  struct integerPointers pointers;
  int i1 = 100, i2;

  pointers.p1 = &i1;
  pointers.p2 = &i2;

  //it is not necesary to use parenthesis, because the strucure member operator . has higher precedence than the indirection operator
  *pointers.p2 = -97; //*pointers.p2 : accessing to member pointer

  printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
  printf("i2 = %i, *pointers.p2 = %i\n", i2, *pointers.p2);
  
  return 0;
}

//Linked Lists
