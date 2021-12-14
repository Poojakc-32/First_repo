#include <stdio.h>
#include <string.h>
/*
int main ()
{
	enum week{ mon, tue , wed, thru, fri };
	enum  week day=tue;
	switch (day)
	{
	case mon: 
		printf("today is mon");
	break;
	case tue:
		printf("today is tue");
	break;

	default :
		printf("whatever");
	break;
	}
	
}

////////////////////////////////////

int main ()
{
	int i=10;
	int *ptr= &i;
	*ptr=20;
	int **ptr2=&ptr;
	**ptr2=40;
	printf("%d", **ptr2);

}

////////////////////////////////////

int main ()
{
	int n, sign;
	printf("Enter the number :");
	scanf("%d", &n);
	if (n<0)
	{
		sign=-1;
		printf("%d:\n",sign);
	}
	else if(n==0)
	{
		sign=0;
	    printf("%d\n", sign);
	}
	else{
		sign=1;
	printf("%d\n", sign);
 }
}
//////////////////////////////////

int main()
{
	int n1=0,n2=1,n3,i;
	int count=10;
	scanf("%d", &count);
	printf("%d,%d", n1,n2);
	for (i=2;i<count;i++)
	{
		n3=n1+n2;
		printf(",%d",n3);
		n1=n2;
		n2=n3;
	}
}


int main()
{
	char str[20]="hello" ;

	int i;
	for (i=strlen(str)-1;i>=0;i--)
	{
		printf("%c", str[i]);
	}

return 0;
}


int main()
{
	int n ;
	int temp;
	int rem, rev=0;
	scanf("%d", &n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("%d",rev);
    if(temp==rev)
	{
	printf("the number is palindron");
	}
	else
	printf("the number is not a palindrom");
}
./////////////////////Prime number////////////////////////////////////////////

int main()
{
	int n,i;
	int flag=0;
	printf("Enter prime number:");
	scanf("%d:", &n);
	int p=n/2;
	printf("%d", &p);
	//logic for non prime number
	for (i=2;i<=n/2 ;i++)
	{
	if (n%i==0)
		{
		flag=1;
		break;
		}
	}
	if(n==1)
	{
		printf("1 is neither a prime number nor a composite:");
	}
	else
	{
		if(flag==0)
		{
			printf("n is a prime number ");
		}
		else 
			printf("n is not a prime number");
	}
}

////////////////////////////////////////////////////
int main()
{
	int n,i , low, high;
	int flag;
	printf("Enter prime number:");
	scanf("%d,%d:", &low ,&high );
	printf("the prime numer between %d and %d are:", low, high);

	while(low<high)
	{
		flag=0;
	// ignore numbers less than 2
      if (low <= 1) {
         ++low;
         continue;
	  }

	//logic for non prime number
	for (i=2;i<=low/2;++i)
	{
	if (low%i==0)
		{
		flag=1;
		break;
		}
	}
	if(flag==0)
		{
		printf("%d", low);
		}
		++low;
	}
	return 0;

}	

///////////////////////////////////////////////
int Max(int arr[], int n)
{
	int max=arr[0];
	printf("%d:",arr[0]);
	for (int i=0;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	return max;
}
int main()
{
 int arr[]={2,8,3,4};
 int n=sizeof(arr)/sizeof(arr[0]);
	printf("sum of array %d ", Max(arr,n));
	return 0;
}

////////////////////////////////////////////////

int fact(int n);
int main()
{
	int *num;
    *num=(int)malloc(sizeof(n*num);
	scanf(%d, &n);
	for(int i=0;i<n;++i)
	printf("%d", num)
    
}
int fact(int n)
{ 
	if(n>=1)
	{
	return n * fact(n-1);
	}
	else
		return 1;

}
*/


/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a[10], n,i ,count=0;
   printf("Enter the number\n");
   scanf("%d", &n);
   for(i=0;n>0;i++)
   {
     a[i]=n%2;
     if(a[i]==1)
     count++;
     n=n/2;
   }
   printf("binary of given number is\n");
   printf("%d\n",count);
   for(i=i-1;i>=0;i--)
   {
       printf("%d",a[i]);
   }
    return 0;
}
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

void rev(char str[])
{
  int temp ,i=0 , j=0,n ;
  n=strlen(str);
  j=n-1;
   printf("%d\n", j);
  while(i<j)
  {
      temp=str[i];
      str[i]=str[j];
      str[j]=temp;
      i++;
      j--;
  }
}
int main()
{
    char str[]="i am ver good pooja";
   
    rev(str);
    printf("%s", str);

    return 0;
}


/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int add(struct node**head, int n)
{
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=n;
    new_node->next=(*head);
    (*head)=new_node;
}
int addAfter(struct node *prev_node, int n)
{
    if(prev_node==NULL)
    {
        printf("privious node can not be null");
    }
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=n;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
    
}
int addAtend(struct node**head, int n)
{
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    struct node *last=*head;
    new_node->data=n;
    new_node->next=NULL;
    if(*head==NULL)
    {
        *head=new_node;
        
    }
    while(last->next!=NULL)
        last=last->next;
    
    last->next=new_node;

}

int delete(struct node**head, int key)
{
    struct node *prev, *temp=*head;
    if(temp!=NULL&&temp->data==key)
    {
        *head=temp->next;
        free(temp);
    }
    while(temp!=NULL&&temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }
   prev->next=temp->next;
   free(temp);
    
}
int printfun(struct node *head)
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
    add (&head, 1);
    add (&head,2);
    add (&head, 6);
    add (&head,7);
    addAtend(&head , 1);
    printfun(head);
    delete(&head, 1);
    printfun(head);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
int add(struct node**head, int val)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=*head;
    *head=temp;
}
int printList(struct node*head)
{
    while(head!=NULL)
    {
        printf("%d ", head->data);
        head=head->next;
    }
    printf("\n");
}
int getCount(struct node *head)
{
    int count = 0;  // Initialize count
    struct node *current = head;  // Initialize current
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
int main()
{
    struct node *head=NULL;
    add(&head,1);
    add(&head,2);
    add(&head,3);
    add(&head,4);
    add(&head,5);
    printList(head);
    printf("count:%d", getCount(head));
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node {
    int data;
    struct node *next;
};
int add(struct node**head, int val)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=*head;
    *head=temp;
}
int printList(struct node*head)
{
    while(head!=NULL)
    {
        printf("%d ", head->data);
        head=head->next;
    }
    printf("\n");
}
int getCount(struct node *head)
{
    int count = 0;  // Initialize count
    struct node *current = head;  // Initialize current
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
int search(struct node *head, int key)
{
    struct node *current=head;
    while(current!=NULL)
    {
        if(current->data==key)
        return true;
    current=current->next;

    }
    return false;
}
int main()
{
    struct node *head=NULL;
    add(&head,1);
    add(&head,2);
    add(&head,3);
    add(&head,4);
    add(&head,5);
    printList(head);
    printf("count:%d\n", getCount(head));
    search(head, 6)?printf("YES"):printf("No");
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node {
    int data;
    struct node *next;
};
int add(struct node**head, int val)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=*head;
    *head=temp;
}
int printList(struct node*head)
{
    while(head!=NULL)
    {
        printf("%d ", head->data);
        head=head->next;
    }
    printf("\n");
}
int getCount(struct node *head)
{
    int count = 0;  // Initialize count
    struct node *current = head;  // Initialize current
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
int removeDuplicates(struct node *head)
{
    struct node *current=head;
    struct node *next_next;
    
    while(current->next!=NULL)
    {
        if(current->data==current->next->data)
        {
            next_next=current->next->next;
            free(current->next);
            current->next=next_next;
        }
        current=current->next;
    }
    
}
int search(struct node *head, int key)
{
    struct node *current=head;
    while(current!=NULL)
    {
        if(current->data==key)
        return true;
    current=current->next;

    }
    return false;
}
int main()
{
    struct node *head=NULL;
    add(&head,1);
    add(&head,2);
    add(&head,3);
    add(&head,3);
    add(&head,5);
    printList(head);
    printf("count:%d\n", getCount(head));
    search(head, 6)?printf("YES"):printf("No");
    removeDuplicates(head);
    printList(head);
}


#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

int insert(struct node**head , int new_data)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=*head;
    *head=new_node;
}
int printVal(struct node*head)
{
    while(head!=NULL)
    {
        printf("%d ", head->data);
        head=head->next;
    }
    printf("\n");
}
int reverseList(struct node**head)
{
    struct node *prev=NULL, *curr=*head, *next=NULL;
    
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    *head=prev;
}
int main()
{
    struct node *head=NULL;
    insert(&head,1);
    insert(&head, 2);
    insert(&head, 3);
    printVal(head);
    reverseList(&head);
    printVal(head);
}
