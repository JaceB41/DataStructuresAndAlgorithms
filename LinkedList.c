#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  int data;
  struct Node* link;
} Node;

Node* head;

<<<<<<< HEAD
void insert(Node* head, int x){
  
  Node* temp = (Node*)malloc(sizeof(Node));
  printf("%p\n", (void *)temp);
=======
Node* insert(Node* head, int x){
  
  Node* temp = (Node*)malloc(sizeof(Node));
>>>>>>> 789a3992325d601f5e1a13a5d4c3ff55f87b4f1f
  temp->data = x;
  temp->link = NULL;
  if(head != NULL) temp->link = head;
  head = temp;
<<<<<<< HEAD
=======
  return head;
>>>>>>> 789a3992325d601f5e1a13a5d4c3ff55f87b4f1f

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
<<<<<<< HEAD
  head = NULL; 
=======
  head = NULL;
>>>>>>> 789a3992325d601f5e1a13a5d4c3ff55f87b4f1f
  printf("Enter the length of the list\n");
  int n, i, x;
  scanf("%d", &n);
  printf("Initiate linked list with a list of numbers seperated by spaces\n");
  for(i = 0; i< n; i++){
    scanf("%d", &x);
    insert(head, x);
<<<<<<< HEAD
    printf("%p\n", (void *)head);
=======
>>>>>>> 789a3992325d601f5e1a13a5d4c3ff55f87b4f1f
    
  }
  print();

  return 0;
} 