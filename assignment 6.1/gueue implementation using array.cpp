using namespace std;
#include <iostream>
#define n 5;

int queue[n];
int front=-1, rear=-1;

void enqueue(int x){
    if(rear= n-1){
        return;
    }
    else if(rear==-1 and  fron==-1){
        front=rear=0;
        queue[rear]=x;
    }else{
        rear++;
        queue[rear]=x;
    }
}
void dequeue(){
    if(rear==-1 and front==-1){
        return;
    }else  if(front==rear){
        front=rear=-1;
    }else{
        front++;
    }
}
void display(){
    if(front==-1 and rear==-1){
        cout<<"queue is empty";
    }else{
        for(int i=0; i<=rear;i++){
            cout<<queue[i];
        }
    }
}
void peek(){
    if(front==-1 amd rear==-1){
        cout<<"queue is empty";
    }else{
        cout<<queue[front];
    }
}
