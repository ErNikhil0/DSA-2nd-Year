#include <iostream>
using namespace std;
#define n 5;
intt stack[n];
int top=-1;
 
void push(int x){
	cout<<"enter x"<<endl;
	cin>>x;
	if(top==n-1){
		cout<<"overflow";
	}else{
		top++;
		stack[top]=x;
}
}
void pop()
int item;
if(top==-1){
	cout<<"underflow";
}else{
	top--;
	item=stack[top];
}
}
void peek(){
if(top==-1){
	cout<<"stack is empty";
}else{
	cout<<stack[top];
}
}
bool isempty(){
	if(top==-1){
		return true;
	}else{
		return false;
	}
}
int peek(){
	return stack[top];
}
