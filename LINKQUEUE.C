#include <stdio.h>
#include <stdlib.h>
struct node {
    int key;
    struct node* next;
};
struct Queue {
    struct node *f, *r;
};
struct node* newNode(int k)
{
    struct node* temp;
    temp= (struct node*)malloc(sizeof(struct node));
    temp->key = k;
    temp->next = NULL;
    return temp;
}
struct Queue* createQueue()
{
    struct Queue* q;
    q = (struct Queue*)malloc(sizeof(struct Queue));
    q->f=q->r=NULL;
    return q;
}
void enqueue(struct Queue* q, int k)
{
    struct node* temp = newNode(k);
    if (q->r == NULL) {
        q->f = q->r = temp;
        return;
    }
    q->r->next = temp;
    q->r = temp;
}
void dequeue(struct Queue* q)
{
    if (q->f == NULL)
        return;
    struct node* temp = q->f;
    q->f = q->f->next;
    if (q->f == NULL)
        q->r = NULL;
    free(temp);
}
int main()
{
    struct Queue* q = createQueue();
    enqueue(q, 3);
    enqueue(q, 9);
    dequeue(q);
    dequeue(q);
    enqueue(q, 7);
    enqueue(q, 5);
    enqueue(q, 8);
    dequeue(q);
    printf("Front Queue : %d \n", q->f->key);
    printf("Rear Queue: %d", q->r->key);
    return 0;
}