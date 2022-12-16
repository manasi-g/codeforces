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
void insertAtHead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;
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
// node* MoveKNodes(node* &head, int n, int k){
//     node* temp=head;
//     node* temp1=head;
//     for(int i=0;i<n-1;i++)  temp=temp->next;
//     for(int i=0;i<k;i++){
//         insertAtHead(head,temp->data);
//         deletion(head,temp->data);
//     }
//     return head;
// }
void insertAtTail(node* &head, int val){
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

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}
node* reversek(node* &head,int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reversek(nextptr,k);
    }
    return prevptr;
}

void make_cycle(node* &head, int k){
    node* temp=head;
    node* trial;
    int c=1;
    while(temp->next!=NULL){
        if(c==k)  trial=temp;
        temp=temp->next;
        c++;
    }
    temp->next=trial;
}
bool detect_cycle(node* &head){
    node* fast1=head;
    node* slow=head;
    while(fast1!=NULL){
        if(fast1==slow) return true;
        fast1=fast1->next->next;
        slow=slow->next;
    }
    return false;
}
void remove_cycle(node* &head){
    node* fast1=head;
    node* slow=head;
    do{
         fast1=fast1->next->next;
        slow=slow->next;
    }while(fast1!=slow);
    fast1=head;
    while(fast1->next!=slow->next){
        fast1=fast1->next;
        slow=slow->next;
    }
    slow->next=NULL;
}
int length(node* & head){
    node* temp=head;
    int c=0;
    while(temp!=NULL){
        temp=temp->next;
        c++;
    }
    return c;
}
int intersection(node* & head1, node* &head2){
    int l1=length(head1);
    int l2=length(head2);
    node* ptr1;
    node* ptr2;
    int d;
    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;

    }
    else if(l1<l2){
        d=-l1+l2;
        ptr1=head2;
        ptr2=head1;
    }
    while(d){
        if(ptr1==NULL)  return -1;
        ptr1=ptr1->next;
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    
}
node* mergerrecursive(node* & head1, node*& head2){
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;
    node* result;
    if(head1->data>head2->data){
        result=head1;
        result->next=mergerrecursive(head1->next,head2);
    }
    else{
         result=head2;
        result->next=mergerrecursive(head1,head2->next);
    }
}
void sortlist(node* & head){
    node* temp=head;
    
    if(head==NULL || head->next==NULL)  return;
    while(temp!=NULL){
        node* n=temp->next;
        while(n!=NULL){
        if(temp->data>n->data){
            node* a=temp;
            temp=n;
            n=a;

        }
        n=n->next;
        }
        temp=temp->next;

    }

}

int32_t main(){
node* head=NULL;
insertAtTail(head,1);
insertAtTail(head,8);
insertAtTail(head,2);
insertAtHead(head,7);
insertAtTail(head,3);
insertAtTail(head,6);
insertAtTail(head,4);
insertAtTail(head,5);
//MoveKNodes(head, 3,4);
display(head);


return 0;
}
