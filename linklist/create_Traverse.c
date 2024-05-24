#include <stdio.h>
#include <stdlib.h> //for malloc used

struct Node
{
    int data;
    struct Node *next;
};

void linkListTraversal(struct Node *ptr)
{

    while (ptr != NULL)
    {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 5;
    second->next = forth;

    // Termionate t
    third->data = 9;
    third->next = NULL;

    forth->data = 44;
    forth->next = third;

    linkListTraversal(head);
    return 0;
}