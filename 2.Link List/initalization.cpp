#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main() {
    int n;
    cout << "Enter No of node:" << endl;
    cin >> n;
    struct Node* head , *temp,*ptr;
    for(int i=0; i<n;i++){
        temp = (struct Node*)malloc(sizeof(struct Node));
        cout<< "enter data of node data:" ;
        cin>>temp->data;
        if(i==0){ 
            head = temp;
        }
        else{
            ptr->next = temp;
        }
        ptr = temp;
    }
    temp = head;
    cout << "link list" << endl;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }

    return 0;
}