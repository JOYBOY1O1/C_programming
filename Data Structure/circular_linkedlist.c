#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void circular_traversal(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("Element %d \n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct node *insert_at_first(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head->next;
    ptr->data = data;

    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;

    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = head;

    printf("Circular linked list traversal \n\n");
    circular_traversal(head);
    printf("\n");
    
    printf("Circular linked list traversal AFTER insertion at first\n\n");
    head=insert_at_first(head,10);
    circular_traversal(head);
    printf("\n");

    return 0;
}