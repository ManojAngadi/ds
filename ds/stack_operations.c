#include <stdio.h>
#define MAX 5
int stack[MAX],top=-1;
void push(){
    if(top==MAX-1){
        printf("Stack overflow. Cannot push element.\n");
        return;
    }
    int value;
    printf("Enter the value to push: ");
    scanf("%d", &value);
    stack[++top] = value;
    printf("Pushed %d onto the stack.\n", value);
}
void pop(){
    if(top==-1){
        printf("Stack underflow. Cannot pop element.\n");
        return;
    }
    printf("Popped %d from the stack.\n", stack[top--]);
}
void display(){
    if(top==-1){
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements are: ");
    for(int i=top; i>=0; i--){
        printf("%d ", stack[i]);
        printf("\n");
        return;
    }
    printf("\n");
}
int main(){
    int choice;
    do {
        printf("Stack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 4);
    return 0;
}