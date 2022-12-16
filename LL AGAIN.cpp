#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    } 
};
void insertAtHead(node* &head,int val){
    node* n= new node(val);
    n->next=head;
    head=n;
}
void insertAtTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void todeletehead(node* &head){
    node* todel=head;
    head=head->next;
    delete todel;
}
void deletion(node* head, int val){
    node* temp=head;
    if(temp==NULL){
        return;
    }
    else if(temp->next==NULL){
        todeletehead(head);
        return;
    }
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todel=temp->next;
    temp->next=temp->next->next;
    delete todel;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}
int main(){
node* head=NULL;
insertAtTail(head,5);
insertAtTail(head,4);
insertAtTail(head,3);
insertAtTail(head,3);
insertAtHead(head,6);
display(head);

}
