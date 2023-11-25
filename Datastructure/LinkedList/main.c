#include <stdio.h>
#include <stdlib.h>
/*

  create a linked list

  single linked list

*/

struct Node
{
  int data;
  struct Node *next;
};

/*
  function Definations start
*/

void insertAtStart(struct Node **LinkListStart, int data);
void Print(struct Node *LinkListStart);
/*
  function Definations end
*/

int main()
{
  struct Node *head = NULL;
  int data, total_item;
  printf("Enter How many Item in list : \t ");
  scanf("%d", &total_item);
  for (size_t i = 0; i < total_item; i++)
  {
    printf("Enter the item : \t");
    scanf("%d", &data);
    insertAtStart(&head, data);
    Print(head);
  }

  printf("Press enter to exit...\n");
  getchar();
  return 0;
}

/*
  To insert the item at the start of the list
  create a new node add data into node,
  check if the start is null point the start to new created node
  else point start to the newly created node and point next to what was on the start

*/
void insertAtStart(struct Node **LinkListStart, int data)
{
  struct Node *temp = malloc(sizeof(struct Node));
  temp->data = data;
  temp->next = NULL;
  if (*LinkListStart != NULL)
  {
    temp->next = *LinkListStart;
  }
  *LinkListStart = temp;
}

void Print(struct Node *LinkListStart)
{
  struct Node *head = LinkListStart;
  printf("List is :");
  while (head != NULL)
  {
    printf("%d \t", head->data);
    head = head->next;
  }
  printf("\n");
}