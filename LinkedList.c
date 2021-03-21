#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  int data;
  struct Node* link;
} Node;

Node* head;

void insert(Node* head, int x){
  
  Node* temp = (Node*)malloc(sizeof(Node));
  printf("%p\n", (void *)temp);
  temp->data = x;
  temp->link = NULL;
  if(head != NULL) temp->link = head;
  head = temp;

}

void print(){
  Node* temp = head;
  printf("\nList is:");
  while(temp != NULL){
    printf(" %d", temp->data);
    temp = temp->link;
  }
}

int main(){
  head = NULL; 
  printf("Enter the length of the list\n");
  int n, i, x;
  scanf("%d", &n);
  printf("Initiate linked list with a list of numbers seperated by spaces\n");
  for(i = 0; i< n; i++){
    scanf("%d", &x);
    insert(head, x);
    printf("%p\n", (void *)head);
    
  }
  print();

  return 0;
} 