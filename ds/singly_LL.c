#include <stdio.h>
#include <stdlib.h>
struct Node {
 int data;
 struct Node* next;
};
struct Node* head = NULL;

void insert() {
 int value;
 printf("Enter value to insert: ");
 scanf("%d", &value);
 struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 newNode->data = value;
 newNode->next = NULL;
 if (head == NULL)
 head = newNode;
 else {
 struct Node* temp = head;
 while (temp->next != NULL)
 temp = temp->next;
 temp->next = newNode;
 }
 printf("%d inserted\n", value);
}

void delete() {
 if (head == NULL) {
 printf("List is empty\n");
 return;
 }
 struct Node* temp = head;
 head = head->next;
 printf("%d deleted\n", temp->data);
 free(temp);
}

void display() {
 if (head == NULL) {
 printf("List is empty\n");
 return;
 }
 struct Node* temp = head;
 printf("Linked List: ");
 while (temp != NULL) {
 printf("%d -> ", temp->data);
 temp = temp->next;
 }
 printf("NULL\n");
}
int main() {
 int choice;
 do {
 printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter choice: ");
 scanf("%d", &choice);
 switch (choice) {
 case 1: insert(); break;
 case 2: delete(); break;
 case 3: break;
 case 4: printf("Exiting...\n"); break;
 default: printf("Invalid choice\n");
 }
 } while (choice != 4);

 return 0;
}