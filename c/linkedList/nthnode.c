// detect a loop in a linked list

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int data;
    struct node *next;
};

int add(struct node** head, int val)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=*head;
    *head=temp;
}

void printMiddle(struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;
 
    if (head!=NULL)
    {
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        printf("The middle element is [%d]\n\n", slow->data);
    }
}
  
int getLength(struct node *head)
{
if (head == NULL)
{
printf("Error : Invalid node pointer !!!\n");
return 0;
}

int length =0;
while(head != NULL){
head = head->next;
length++;
}
return length;
}

struct node* getNthLastNode(struct node* head, int n)
{
	struct node *front, *back;
	int i;
	front = back = head;
	if(n > getLength(head))
	{
	printf("Error : n is greater than length of Linked List\n");
	return NULL;
	}
	for(i = 0; i < n-1; i++)
		{
		front = front->next;
		}
	while(front->next != NULL)
		{
			front = front->next;
			back = back->next;
		}
return back;
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
	int N;
    struct node *head=NULL;
	struct node *NthNode;
    add(&head,1);
    add(&head, 2);
    add(&head, 7);
	add(&head, 5);
	add(&head, 6);
printf("\n\nEnter value of N : ");
scanf("%d", &N);
NthNode = getNthLastNode(head, N);
printf("\nNth Last node is %d\n", NthNode->data);
return 0;
}