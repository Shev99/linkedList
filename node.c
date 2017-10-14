#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void print_list(struct node *link){

  while(link){
    printf("%d, ", link->i);
    link = link->next;
  }
  printf("\n");

}

struct node *insert_front(struct node *link, int n){

  struct node *front = (struct node *)malloc(sizeof(struct node));
  front->next = link;
  front->i = n;
  return front;

}

struct node * free_list(struct node *link){
  
  while(link){
    struct node *prev = link;
    link = link->next;
    free(prev);
    prev = NULL;
  }

  return link;

}
