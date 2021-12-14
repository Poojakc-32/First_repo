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

void deleteNode(struct node* head)
{
    if (head->next == NULL)
    {
        free(head);
        return;
    }
    struct node* temp = head->next;
    head->data = temp->data;
    head->next = temp->next;
    free(temp);
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
    printList(head);
    deleteNode(head);
    printList(head);
}