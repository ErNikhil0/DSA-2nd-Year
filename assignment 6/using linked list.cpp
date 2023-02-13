
#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
node *top=0;
void push(int x){
    node *temp= new node();
    temp ->next=top;
    top=temp;
}
void pop(){
    nofr *temp= top;
    temp=top;
    if(top==0){
        cout<<"underflow";
    }else{
        top=top->next;
        free(temp);
    }
}
void peek(){
    if(top==0){
        cout<< "stack is empty";
    }else{
        cout<< top->data;
    }
    
}
void display(){
    struct *node=temp;
    top=temp;
    if(top==NULL){
        cout<<"stack is empty";
    }else{
    while(temp != NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
}
