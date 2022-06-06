#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
	Node(int x){
		data = x;
		next = NULL;
	}
};
class Stack{
	public:
		Node* top;
		Stack(){
			top = NULL;
		}
		void push(int x){
			Node* n = new Node(x);
//			n->data = x;
//			n->next = NULL;
			if(top == NULL){
				top = n;
			}else{
				n->next = top;
				top = n;
			}
		}
		
		void Pop(){
			Node* temp = top;
			temp = temp->next;
			delete(top);
			top = temp;
		}
		void print(){
			Node* temp = top;
			if(top == NULL){
				cout << "Stack is Empty";
				return;
			}
			while(temp != NULL){
				cout << temp->data << " ";
				temp = temp->next;
			}
		}
};

int main(){
	Stack *st = new Stack();
	st->push(2);
	st->push(3);
	st->push(5);
	st->Pop();
	st->print();
}
