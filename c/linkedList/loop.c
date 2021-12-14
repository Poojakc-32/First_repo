// detect a loop in a linked list
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int data;
    struct node *next;
};

int add(struct node **head, int val)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=*head;
    *head=new_node;
}

int detectLoop(struct node* head)
{
    struct node *slow = head, *fast = head;
    while (slow && fast && fast->next) 
		{
			slow = slow->next;
			fast = fast->next->next;
			 if (fast==slow)     
				{   
				  return 1;				  
				}			 
        }
	 return 0; 
}
  
int printList(struct node* head)
{
    while(head!=NULL)
    {
        printf("%d ", head->data);
        head=head->next;
    }
    printf("\n");
}

int main()
{
    struct node *head=NULL;
    add(&head,1);
    add(&head, 2);
    add(&head, 3);
	add(&head, 5);
	head->next->next->next=head->next;
	if(detectLoop(head))
	{
      printf(" Loop is found ");
	}
	else
	{
		printf(" Loop is not found");
	}
}