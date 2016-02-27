/*this code was a class exercise, 10 random numbers
 * are inserted in a queue and five are remove showing how 
 * a queue functions*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100 /*maximum size of queue*/

typedef struct queueNode *LINK;
struct queueNode {
    int item;
    LINK next;
   };

LINK head,tail;

LINK newNode(int item, LINK nxt) {
    LINK nnode = malloc(sizeof(*nnode));
    nnode -> item = item;
    nnode -> next = nxt;
    return nnode;
  }

void queueInit(int max) {
    head = NULL;
  }

int queueEmpty() {
    return head == NULL;
}

void enqueue(int item) {
    if (head == NULL) {
        head = (tail = newNode(item, head));
        return;
    }

    tail -> next = newNode(item, tail->next);
    tail = tail -> next;
}

int dequeue(void) {
    int item = head -> item;
    LINK t = head -> next;
    free(head); head = t;
    return item;
}

void queueDisplay(void) {
    LINK t = head;
    while (t != NULL) {
        printf("%d ",t -> item);
        t = t -> next;
    }
    printf("\n");
}

int main(void) {
    int i, item;
    queueInit(MAX);
/*add 10 random numbers to queue*/
    for (i = 0; i < 10; i++)
        enqueue(rand() % 1000);
    printf("Initial Contents: ");
    queueDisplay();
/*dequeue 5 items off the queue*/
    for (i = 0; i< 5; i++) {
        if (!queueEmpty()) {
            item = dequeue();
            printf("%d dequeued from queue\n",item);
        }
    }
    printf("Contents after dequeuing off 5 items: ");
    queueDisplay();
	return 0;
}
