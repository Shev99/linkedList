#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(){

  struct node *n1 = NULL;
  printf("The list right now is:");
  print_list(n1);

  int i;
  for (i = 0;i < 15; i++)
    n1 = insert_front(n1,i);
  
  printf("The list now is:");
  print_list(n1);
    
  printf("The list after clearing is: ");
  print_list(free_list(n1));


}
