#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*next;
};

void traversal(struct node*head)
{
	while(head!=NULL)
	{
		printf("Elements in linked list : %d \n",head->data);
		head=head->next;
	}
}

struct node*insert_at_first(struct node*head,int data)
{	
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	
	ptr->data=data;
	ptr->next=head;
	return ptr;
	
}

struct node*insert_at_index(struct node*head,int data,int index)
{
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	
	struct node*p=head;
	
	int i=0;
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
	
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	
	return head;
	
}

struct node*insert_at_end(struct node*head,int data)
{
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	struct node*p=head;
	
	ptr->data=data;
	
	while(p->next!=NULL)
	{
		p=p->next;
				
	}	
	p->next=ptr;
	ptr->next=NULL;
	
	return head;
}

struct node*insert_after_node(struct node*head,struct node*prev,int data)
{
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	
	ptr->data=data;
	
	ptr->next=prev->next;
	prev->next=ptr;
	
	return head;

}



int main()
{
	struct node *head;
	struct node *second;
	struct node *third;
	struct node *fourth;
	
	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	fourth = (struct node*)malloc(sizeof(struct node));
	
	head->data=10;
	head->next=second;
	
	second->data=20;
	second->next=third;
	
	third->data=30;
	third->next=fourth;
	
	fourth->data=40;
	fourth->next=NULL;
	
	printf("Linked list Traversal\n\n");
	traversal(head);
	printf("\n");
	printf("Traversal after insetion at first node\n\n");
		
	head = insert_at_first(head,1);
	
	traversal(head);		
	printf("\n");
	printf("Traversal after insetion at custom INDEX\n\n");

	head = insert_at_index(head,5,1);
	traversal(head);
	printf("\n");

	printf("Traversal after insetion at END\n\n");
	head = insert_at_end(head,50);
	traversal(head);
	printf("\n");		
	
	
	printf("Traversal after insetion at NODE\n\n");
	head = insert_after_node(head,second,25);
	traversal(head);
	printf("\n");		
			
	return 0;
}