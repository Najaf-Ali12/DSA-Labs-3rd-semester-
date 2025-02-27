//lab7
//Q1: Implementation of stack using linked list
#include <iostream>
using namespace std;
class Node{
	public:
		int data;
	public:
		Node* next;
	public:
		Node(int data){
			this->data=data;
			this->next=next;
		}
};
class Stack{
	Node* head;
	Node* tail;
	public:
		Stack(){
			this->head=NULL;
			this->tail=NULL;
	}
	public:
		int is_empty(){
			return head==NULL;
		}
	public:
		void push(int data){
			Node* new_node=new Node(data);
			if (is_empty()){
				new_node->next=NULL;
				head=new_node;
				tail=new_node;
			}
			else{
				new_node->next=NULL;  //as it is last so its next have NULL
				tail->next=new_node;
				tail=new_node;
			}
		}
	public:
		void pop(){
			if (is_empty()){
				cout<<"THE STACK IS EMPTY";
			}
			else if (head==tail){ //it means that stack has only one node/element
				cout<<"ik";
				head=NULL;
				tail=NULL; //WE HAVE TO MAINTAIN THE NEXT AT EACH PLACE
			}
			else{
				Node* temp=head;
				while (temp->next!=tail){  //will be false at second last node
					temp=temp->next;
				}
				temp->next=NULL;   //here the temp is pointing second last node 
				tail=temp; //now last element is removed as tail pointing to previous second last which is now last
			}
		}
	public:
		void display(){
			if (is_empty()){
				cout<<"THE STACK IS EMPTY";
			}
			else{
				Node* temp=head;
				while (temp!=NULL){
					cout<<temp->data<<endl;
					temp=temp->next;
				}
			}
		}
};
int main(){
	Stack* obj=new Stack();
	obj->push(89);
	obj->push(90);
	obj->push(91);
	obj->pop();
	obj->pop();
	obj->display();
	return 0;
}
