#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(){
        data = 0;
        next = NULL;
    }
    Node(int x){
        this->data = x;
        this->next = NULL;
    }
};


class Linked{
    Node *head;
    public:
    Linked() {head = NULL;}
    void eInsert(int);
    void Display();
    void count();
    void Delete(int);
};



void Linked::eInsert(int x){
    Node *temp = new Node(x);
    if(head == NULL){
        head = temp;
        return;
    }
    
    Node* cur = head;
    while(cur->next != NULL){
        cur = cur->next;
    }
    cur->next  = temp;
}



void Linked::Display(){
    Node *temp = head;
    if(temp == NULL){
        cout << "List is Empty." << endl;
        return;
    }
    
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void Linked::count(){
    int ct = 0;
    if(head == NULL){
        cout << ct << "\n";
        return;
    }
    Node *temp = head;
    while(temp != NULL){
        ct++;
        temp = temp->next;
    }
    cout << ct << "\n";
}

void Linked::Delete(int p){
    Node *temp = head;
    if(head == NULL){
        cout << "List is Empty.";
        return;
    }
    
    if(p == 1){
        head = head->next;
        delete(temp);
        return;
    }
    
    Node *cur = head;
    int ct = 0;
    
    while(cur != NULL){
        ct++;
        cur = cur->next;
    }
    cur = NULL;
    
    if(p>ct){
        cout << "Index is Out of range." << endl;
        return;
    }
    
    for(int i = 0; i < p-1 && temp != NULL; ++i){
        cur = temp;
        temp = temp->next;
    }
    cur->next = temp->next;
    delete(temp);
    
}

int main(){
    Linked o;
    o.eInsert(2);
    o.eInsert(4);
    o.eInsert(7);
    o.eInsert(10);
    o.eInsert(13);
    o.Display(); cout << "\n";
    o.count();
    o.Delete(5);
    o.Display();cout << "\n";
    o.count();
    return 0;
}


