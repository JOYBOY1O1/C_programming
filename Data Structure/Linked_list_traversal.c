#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

void linked_list_traversal(struct Node *ptr)
{
    while( ptr != NULL)
    {
        printf("Element = %d \n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 66;
    third->next = NULL;

    linked_list_traversal(head);

    return 0;
}