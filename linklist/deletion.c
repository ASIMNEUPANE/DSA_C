#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traverse(struct Node *ptr)
{

    while (ptr != NULL)
    {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *deleteInFirst(struct Node *head)
{
    struct Node *ptr = head;
    ptr = head->next;
    free(head);
    return ptr;
}

struct Node *deleteInBetween(struct Node *head, int index)
{

    int i = 0;
    struct Node *p = head;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    struct Node *q = p->next;
    p->next = q->next;
    free(q);
    return head;
}


struct Node *deleteLastNode(struct Node *head)
{

    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        q = q->next;
        p = p->next;
    }

    p->next = NULL;
    free(q);
    return head;
}

struct Node *deleteGivenValue(struct Node *head, int value)
{

    struct Node *p = head;
    struct Node *q = head->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }

    return head;
}
int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 5;
    second->next = fourth;

    // Termionate t
    third->data = 9;
    third->next = NULL;

    fourth->data = 44;
    fourth->next = third;
    // head = deleteInFirst(head);
    // head = deleteInBetween(head, 2);
    // head = deleteLastNode(head);
    head = deleteGivenValue(head, 44);

    traverse(head);
    return 0;
}