#include <stdio.h>
#define SIZE 5
int queue[SIZE], front = 0, rear = -1;

void enqueue(int element) {
 if (rear == SIZE - 1) {
 printf("Queue is full!\n");
 return;
 }
 queue[++rear] = element;
 printf("%d enqueued to queue.\n", element);
}

void dequeue() {
 if (front > rear) {
 printf("Queue is empty!\n");
 return;
 }
 printf("%d dequeued from queue.\n", queue[front]);
 front++;
}

void display() {
 if (front > rear) {
 printf("Queue is empty!\n");
 return;
 }
 printf("Queue elements: ");
 for (int i = front; i <= rear; i++)
 printf("%d ", queue[i]);
 printf("\n");
}
int main() {
 int choice, element;
 while (1) {
 printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter choice: ");
 scanf("%d", &choice);
 switch (choice) {
 case 1:
 printf("Enter element to enqueue: ");
 scanf("%d", &element);
 enqueue(element);
 break;
 case 2:
 dequeue();
 break;
 case 3:
 display();
 break;
 case 4:
 printf("Exiting...\n");
 return 0;
 default:
 printf("Invalid choice! Try again.\n");
  }
 }
}