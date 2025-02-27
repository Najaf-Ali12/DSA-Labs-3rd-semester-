#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insertSorted(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr || head->data >= value) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr && temp->next->data < value) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    int findLastNode() {
        if (head == nullptr)
            return -1;

        Node* temp = head;
        int loc = 1, lastLoc = 1;
        while (temp->next != nullptr) {
            temp = temp->next;
            lastLoc = loc + 1;
            loc++;
        }
        return lastLoc;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;
    list.insertSorted(10);
    list.insertSorted(20);
    list.insertSorted(5);
    list.insertSorted(30);

    list.display();
    cout << "Location of the last node: " << list.findLastNode() << endl;
    return 0;
}
