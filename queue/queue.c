#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue *q){
    if(q->r == q->size){
        return 1;
    }
    return 0;
}
int isEmpty(struct queue *q)
{
    if (q->f ==-1)
    {
        return 1;
    }
    return 0;
}

void enqeue(struct queue *q, int val){
   if(isFull(q)){
    printf("This queue is full");
   } 
   else{
    q->r++;
    q->arr[q->r] = val;
   }
}

int main()
{

    struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    enqeue(&q, 12);
    enqeue(&q, 12);

    return 0;
}