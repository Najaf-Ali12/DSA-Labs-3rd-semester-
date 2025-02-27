#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
    Node* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            newNode->prev = nullptr;
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;

        temp->next = newNode;
        newNode->prev = temp;
    }

    void deleteNode(int key) {
        Node* temp = head;

        while (temp != nullptr && temp->data != key)
            temp = temp->next;

        if (temp == nullptr) {
            cout << "Node not found!\n";
            return;
        }

        if (temp->prev != nullptr)
            temp->prev->next = temp->next;
        else
            head = temp->next;

        if (temp->next != nullptr)
            temp->next->prev = temp->prev;

        delete temp;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    DoublyLinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    list.display();
    list.deleteNode(20);
    list.display();
    return 0;
}
