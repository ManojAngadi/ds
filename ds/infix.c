#include <stdio.h>
#include <ctype.h>
#define SIZE 50  // ✅ Fix 1: define SIZE

char s[SIZE];
int top = -1;

void push(char element){
    s[++top] = element;
}

char pop(){
    return s[top--];
}

int pr(char element){
    switch(element){
        case '#':
        case '(':
        case ')':
            return 1;
        case '+':
        case '-':
            return 2;
        case '*':
        case '/':
            return 3;
        default:
            return 0;
    }
}

void main(){
    char infix[SIZE], pofx[SIZE], ch, element;
    int i = 0, k = 0;

    printf("Enter the infix expression: ");
    scanf("%s", infix);
    push('#');

    while((ch = infix[i++]) != '\0'){
        if(ch == '('){
            push(ch);
        } else if(isalnum(ch)){
            pofx[k++] = ch;
        } else if(ch == ')'){
            while(s[top] != '('){
                pofx[k++] = pop();
            }
            pop();
        } else {
            while(pr(s[top]) >= pr(ch)){
                pofx[k++] = pop();
            }
            push(ch);
        }
    }

    while(s[top] != '#'){
        pofx[k++] = pop();
    }

    pofx[k] = '\0';
    printf("\n\nPostfix expression: %s\n", pofx);
}
