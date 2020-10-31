#include<stdio.h>
#define SIZE 5

void enQueue(int);
void deQueue();
void display();

int items[SIZE], front = -1, rear = -1;

int main() {
    //deQueue is not possible on empty queue
    deQueue();

    //enQueue 5 elements
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);

    //6th element can't be added to queue because queue is full
    enQueue(6);

    display();

    return 0;
}

void enQueue(int value) {
    if (rear == SIZE -1)
        printf("\n Queue is Full ! \n");
    else{
        if(front == -1)
            front = 0;
        rear++;
        items[rear] = value;
        printf("\n Inserted -> %d", value);
    }
}

void deQueue(){
    if(front == -1){
        printf("\n Queue is Empty !");
    }
    else{
        printf("\n Deleted : %d", items[front]);
        front++;
        if(front > rear)
            front = rear = -1;
    }
}

// Function to print the queue
void display() {
    if(rear == -1){
        printf("\n Queue is Empty !");
    }
    else{
        int i;
        printf("\n Queue elements are : \n");
        for(i = front; i <= rear; i++){
            printf("%d ",items[i]);
        }
    }
    printf("\n");
}