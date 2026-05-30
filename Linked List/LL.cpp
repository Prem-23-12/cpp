# include <iostream>
using namespace std ; 

class Node{
public : 
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

public : 
    List() {
        head = tail = NULL;
    } 
    void push_front(int val){
        Node* nextNode = new Node(val); // dynamic memory allocation
        // Node* nextNode(val); // static  memory allocation it delete the object when we come out from func push_front
        if(head == NULL){
            head = tail = nextNode;
        } else {
            nextNode->next = head;
            head = nextNode;
        }
    } 
    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front() {
        if(head == NULL){
            cout << "LL is empty" << endl;
            return ;
        }

        Node* temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout << "LL is empty" << endl ; 
            return ;
        }

        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        
        delete tail;
        tail = temp;
    }

    void insert(int val, int pos){
        if(pos<0){
            cout << "Invalid Index " << endl;
            return ;
        }if(pos == 0){
            push_front(val);
            return;
        }

        Node* temp = head;
        for(int i=0 ; i<pos-1 ; i++){
            if(temp == NULL){
                cout << "Invalid position";
            }
            temp = temp->next;
        }

        Node* nextNode = new Node(val);
        nextNode->next = temp->next ; 
        temp->next = nextNode;
        
    }

    int search(int key){
        Node* temp = head;
        int idx = 0;
        while(temp != NULL){
            if(temp->data == key){ 
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

    void printll() {
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
  
};

int main() {
    List ll;
   
    // ll.push_front(1);
    // ll.push_front(2);
    // ll.push_front(3);

    // ll.insert(4,1);

    // cout << ll.search(4) << endl;

    ll.push_back(4);
    ll.push_back(3);
    ll.push_back(5);
    // ll.pop_front();

    // ll.pop_back();

    ll.printll();
    return 0 ;
}           