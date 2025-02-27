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
		}
};
class Queue{
	Node* front;
	Node* rear;  //node will be inserted at rear and deleted from front
	int number_of_nodes=0;
	public:
		Queue(){
		this->front=NULL;
		this->rear=NULL;
	}
	public:
		int isEmpty(){
			return front==NULL;
		}
	public:
		void enqueue(int data){ //insert the node at rear here rear means tail and it will effect the rear.
			Node* new_node=new Node(data);
			new_node->next=NULL;
			if (isEmpty()){
				front=new_node;
				rear=new_node;
				number_of_nodes++;
			}
			else{
				rear->next=new_node;
				rear=new_node;
				number_of_nodes++;
			}
		}
	public:
		void dequeue(){   //remove the node at front here front means first so it will effect the front
			if (isEmpty()){
				cout<<"The queue is empty"<<endl;
			}
			else{
				if (front==rear){  //it means that there is only one node in the queue
					front=NULL;
					rear=NULL; //now front points no node becuase only node was also deleted.
					number_of_nodes--;
				}
				else{
					front=front->next;
					number_of_nodes--;
				}	
			}
		}
	public:
		void view_front(){
			if (isEmpty()){
				cout<<"The queue is empty"<<endl;
			}
			else{
				cout<<"The data of the node at the front is "<<front->data<<endl;	
			}
		}
	public:
		void view_rear(){
			if (isEmpty()){
				cout<<"The queue is empty"<<endl;
			}
			else{
				cout<<"The data of the node at the rear is "<<rear->data<<endl;	
			}
		}
	public:
		void view_queue(){
			if (isEmpty()){
				cout<<"The queue is empty"<<endl;
			}
			else{
				cout<<"The total number of nodes in the queue are "<<number_of_nodes<<endl;
				cout<<"The data in each node is given below"<<endl;
				Node* temp=front;
				while (temp!=NULL){
					cout<<temp->data<<"<-";
					temp=temp->next;
				}
			}
		}
};
int main(){
	Queue* obj=new Queue();
	obj->enqueue(1);
	obj->enqueue(2);
	obj->enqueue(3);
	obj->enqueue(4);
	obj->enqueue(5);
	obj->enqueue(6);
	obj->dequeue();
	obj->view_front();
	obj->view_rear();
	obj->view_queue();
	return 1;
}