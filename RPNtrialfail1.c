#define max 100
char stack[max];
int top=-1;
void push(char a){
    top+=1;
    stack[top]=a;
}
char pop(){
    char val=stack[top];
    top-=1; 
    return val;
}
int evalRPN(char** tokens, int tokensSize) {
    int out;
    for(int i=0;i<tokensSize;i++){
        if(*tokens[i]=='+'){
            out=int(pop())+int(pop());
            push(char(out));
        }
        else if(*tokens[i]=='-'){
            out=int(pop())-int(pop());
            push(char(out));
        }
        else if(*tokens[i]=='*'){
            out=int(pop())*int(pop());
            push(char(out));
        }
        else if(*tokens[i]=='/'){
            out=int(pop())/int(pop());
            push(char(out));
        }
        else{
            push(*tokens[i]);
        }
    }
    return out;
}
