# include <iostream>
using namespace std;

class Node{
public : 
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Circularlist{
    Node* head;
    Node* tail;
public : 
    Circularlist(){
        head = tail = NULL;
    }

    void insertAthead(int val){
        Node* newnode = new Node(val);
        if(tail == NULL){
            head = tail = newnode;
            tail->next = head;
        }else {
            newnode->next = head;
            head = newnode;
            tail->next = head;
        }
    }

    void insertAttail(int val){
        Node* newnode = new Node(val);
        
        if(head == NULL){
            head = tail = newnode;
            tail->next = head;
        }else{
            tail->next = newnode;
            tail = newnode;
            tail->next = head;
        }
    }

    void deleteAthead(){
        if(head == NULL){
            return ;
        }else if (head == tail){
            delete head;
            head = tail = NULL;
        }else{
            Node* temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }

    void deleteAttail(){
        if(head == NULL){
            return ;
        }else if (head == tail){
            delete head;
            head = tail = NULL;
        }else {
            Node*temp = tail ;
            Node* prev = head;

            while(prev->next != tail){
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;
            temp->next = NULL;
            delete temp ;
        }
    }

    void print(){
        if(head == NULL){
            return ;
        }
        cout << head->data << "->";

        Node* temp = head->next;
        while(temp != head){
            cout << temp->data << "->";
            temp = temp->next;
        }cout << temp->data << endl;
    }
};

int main(){
    Circularlist C1;

    C1.insertAttail(1);
    C1.insertAttail(2);
    C1.insertAttail(3);

    C1.deleteAttail();
    C1.print(); 
    return 0 ;
}