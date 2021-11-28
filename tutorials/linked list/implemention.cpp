#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;        
    }
    void append(int val){
        Node* temp = this;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new Node(val);
        return;
    }
    void display(){
        Node* temp = this;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
    Node* reverse(){
        Node* prev = NULL;
        Node* cur = this;
        Node* next;
        while(cur != NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    int middleElement(){
        Node* fast, *slow;
        fast = slow = this;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow->data;
    }
};

int main(){
    Node* root = new Node(1);
    for(int i= 1; i < 9; i++){
        root->append(i);
    }
    cout << root->middleElement();
    return 0;
}