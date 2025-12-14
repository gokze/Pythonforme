#define MAX 10000
int stack[MAX];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int evalRPN(char** tokens, int tokensSize) {
    for (int i = 0; i < tokensSize; i++) {
        if (tokens[i][0] == '+' && tokens[i][1] == '\0') {
            int b = pop();
            int a = pop();
            push(a + b);
        }
        else if (tokens[i][0] == '-' && tokens[i][1] == '\0') {
            int b = pop();
            int a = pop();
            push(a - b);
        }
        else if (tokens[i][0] == '*' && tokens[i][1] == '\0') {
            int b = pop();
            int a = pop();
            push(a * b);
        }
        else if (tokens[i][0] == '/' && tokens[i][1] == '\0') {
            int b = pop();
            int a = pop();
            push(a / b);
        }
        else {
            push(atoi(tokens[i]));
        }
    }
    return pop();
}
