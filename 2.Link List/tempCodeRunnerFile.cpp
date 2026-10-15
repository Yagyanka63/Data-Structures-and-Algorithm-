#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* ptr;
};
void insertion(int value, int pos,Node*head,Node*n){
    Node* ptr;
    ptr = head;
    n->data = value;
    int count = 0;
    while(count-1!=pos){
       ptr=ptr->next;
       count++;
    }
    n->next=ptr->next;
    ptr->next=n;
    Node* temp;
    temp = head;
    cout << "new link list" << endl;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
}

int main() {
    int value,pos;
    Node n,n1, n2, n3, n4, n5;
    Node* head;
    Node* ptr;
    head = &n1;
    n1.data = 10;
    n1.next=&n2;
    n2.data = 20;
     n2.next = &n3;
    n3.data = 30;
     n3.next = &n4;
    n4.data = 40;
     n4.next = &n5;
    n5.data = 50;
    n5.next = NULL;
    cout << "Enter a Vaue to insert:" << endl;
    cin >> value;
    cout << "Enter a position to insert" << endl;
    cin >> pos;
    cout << "Old link list" << endl;
    ptr = head;
    while(ptr!=NULL){
        cout << ptr->data << " ";
        ptr=ptr->next;
    }
    insertion(value,pos,head,&n);
    return 0;
}