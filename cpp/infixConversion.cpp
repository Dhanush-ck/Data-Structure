#include <iostream>
using namespace std;
class Expr {
    string E;
    int i;
    char x;
public: 
    void read() {
        cout<<"Enter the INFIX Expression : ";
        cin>>E;
    }

    int ICP(char ch) {
        switch(ch) {
            case '^': return 4;
                break;
            case '*':
            case '/': return 2;
                break;
            case '+':
            case '-': return 1;
                break;
            case '(': return 5;
                break;
            default: return -1;
        }
    }

    int ISP(char ch) {
        switch(ch) {
            case '^': return 3;
                break;
            case '*':
            case '/': return 2;
                break;
            case '+':
            case '-': return 1;
                break;
            case '(': return 0;
                break;
            default: return -1;
        }
    }
    
    void conversion() {
        int n = E.length();
        char stack[100];
        string postfix = "";
        int top = -1;
        i=0;
        while(i <= n) {
            x = E[i];
            char a = x;
            if(isalpha(x)){
                postfix += x;
                i++;
                continue;
            }
            switch(x) {
                case '\0' : 
                    while(top>-1) {
                        postfix += stack[top];
                        top = top-1;
                    }
                    break;
                case '(':
                    stack[++top] = x;
                    break;
                case ')':
                    while(stack[top] != '(' && top >= 0) {
                        postfix += stack[top];
                        top--;
                    }
                    while(stack[top] == '(' && top >= 0) {
                        top--;
                    }
                    break;
                default: 
                    while(ISP(stack[top]) >= ICP(x) && top >= 0) {
                        postfix += stack[top];
                        top--;
                    }
                    top++;
                    stack[top]=x;
                    break;
            }
            i++;
        }
        cout<<"Postfix : "<<postfix;
    }
};

int main() {
    Expr EX;
    EX.read();
    EX.conversion();
    return 0;
}