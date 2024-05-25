#include <stdio.h>
#include <stdlib.h> //for malloc used

struct Node
{
    int data;
    struct Node *next;
};

void linkListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node *insertAtFirst(struct Node *head, int data)
{

    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node * p = head->next;

    while (p->next != head)
    {
        p = p->next;
    }
    // At this point P points to the last node of the circular linklist

    p->next = ptr;
    ptr->next = head;
    head = ptr;

    return head;
}
struct Node *insertAtLast(struct Node *head, int data)
{

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head->next;

    while (p->next != head)
    {
        p = p->next;
    }
    // At this point P points to the last node of the circular linklist

    p->next = ptr;
    ptr->next = head;

    return head;
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
    second->next = third;

    // Termionate t
    third->data = 9;
    third->next = forth;

    forth->data = 44;
    forth->next = head;
    head = insertAtFirst(head, 80);
    head = insertAtFirst(head, 90);
    head = insertAtLast(head, 1);

    linkListTraversal(head);
    return 0;
}