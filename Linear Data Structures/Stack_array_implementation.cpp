#include <iostream>
using namespace std;

int top=0;   //global variables to maintain size
int size_a;  //the top(latest) entry and size of stack
int a[100];  //global array to which itself acts as stack

//pushes an element onto stack
void push(int data){
	if(top == size_a){
		cout<<"Stack Overflow\n";  
		return;
	}
	top++;
	a[top]=data;
	return;
}

//pops top
void pop(){
	if(top == 0){
		cout<<"Stack Underflow\n";
		return;
	}
	cout<<a[top]<<" :poped from stack\n";
	top--;
}

//prints stack if not empty
void print(){
	if(top == 0){
		cout<<"Stack Empty\n";
		return;
	}
	cout<<"Stack: ";
	for(int i=1; i<=top; ++i){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	cout<<"\t***Stack Operations***\n\n";
	cout<<"Choose size of STACK: ";
	cin>>size_a;
	while(1){
		int t,n;
		cout<<"\n1. Push\n2. Pop\n3. Print\n4. Exit\n";
		cout<<"Choose Operation: ";
		cin>>t;
		switch(t){
			case 1:
				cout<<"Enter Data: ";
				cin>>n;
				push(n);
				break;
			case 2:
				pop();
				break;
			case 3:
				print();
				break;
			case 4:
				return 0;
		}
	}
	return 0;
}

