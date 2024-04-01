#pragma once
#include <iostream>
#include <vector>
using namespace std;

template<typename T>
struct Node {
    T data; // Data stored in the node
    Node<T>* next; // Pointer to the next node in the list
    Node(T value) : data(value), next(nullptr) {}
};


template<typename U>
class queuey {
private:
    Node<U>* head;
    Node<U>* tail;
public:

    ~queuey() {
        while (head) {
            Node<U>* temp = head;
            head = head->next;
            delete temp;
        }
    }
    queuey() : head(nullptr), tail(nullptr) {}


    void push(U num) {
        Node<U>* newNode = new Node<U>(num);
        if (!head) {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop() {
        Node<U>* tempp = head;
        head = head->next;
        delete tempp;
    }

    Node<U>* front() { return head; }

    bool empty() {
        return head == nullptr;
    }

    void print() {
        Node<U>* current = head;
        while (current) {
            cout << current->data << " " << "printed" << endl;
            current = current->next;
        }
        cout<< endl;
    }
    void movetorear() {
        if (empty()) {
            cout << "Queue is empty. Cannot move element to rear." << std::endl;
            return;
        }

        // Get a reference to the front node
        Node<U>* frontNode = front();

        // Remove the front node
        pop();

        // Push the front node's data to the rear
        push(frontNode->data);

        // Update the tail pointer to point to the new rear node
        tail = tail->next;
    }


};

template<typename Item_Type>
int linear_search(vector<Item_Type> items, Item_Type target, int pos_last) {
    if (pos_last == 0 )
        return -1;
    if (target == items[pos_last])
        return pos_last;
    else
        return linear_search(items, target, pos_last - 1);
};




