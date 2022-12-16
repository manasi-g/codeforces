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
int search(node* &head,int key){
    node* temp=head;
    int c=0;
    while(temp!=NULL){
       
        if(temp->data==key){
            return c;
        }
        temp=temp->next;
         c++;
    }
    return false;

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
node* recurssiveReverse(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=recurssiveReverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
node* reversek(node* &head,int k){
    node* p=NULL;
    node* c=head;
    node* next;
    int c1=0;
    while(c!=NULL && c1<k){
        next=c->next;
        c->next=p;
        p=c;
        c=next;
        c1++;
    }
    if(next!=NULL)
    head->next=reversek(next,k);

    return p;
}

node* reverse(node* &head){
    node* prev=NULL;
    node* curr=head;
    node* next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
void merge(node *a, node **b)  
{  
    node *r = a;  
    while (r->next != NULL)  
    {  
         r = r->next;
    }  
   
    r->next = *b;
}
void sort(node* &head){
     node *current = head, *index = NULL;  
        int temp;  
          
        if(head == NULL) {  
            return;  
        }  
        else {  
            while(current != NULL) {  
                index = current->next;  
                  
                while(index != NULL) {  
                    
                    if(current->data > index->data) {  
                        temp = current->data;  
                        current->data = index->data;  
                        index->data = temp;  
                    }  
                    index = index->next;  
                }  
                current = current->next;  
            }      
        }  
    
}
bool detectCycle(node* &head,int pos){
    node* fest=head;
    node* slow=head;
    while(fest->next!=NULL && fest!=NULL){
        fest=fest->next->next;
        slow=slow->next;
        if(fest==slow){
            return true;
        }
    }
    return false;
}
void makeCycle(node* &head,int pos){
    node* temp=head;
    node* startnode;
    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
}
int len(node* head){
    int c=0;
    node* temp=head;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    return c;
}
node* kappend(node* &head,int k){
    node*newHead;
    node* tail=head;
    node* newTail;
    int l=len(head);
    int c=1;
    k=k%l;
    while(tail->next!=NULL){
        
        if(c==l-k){
            newTail=tail;
        }
        if(c==l-k+1){
            newHead=tail;
        }
        tail=tail->next;
        c++;
    }
    newTail->next=NULL;
    tail->next=head;
    return newHead;
}
void intersect(node* &a,node* &b,int pos){
    node* temp1=a;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    node* temp2=b;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}
int intersection(node* &a,node* &b){
    int l1=len(a);
    int l2=len(b);
    int d=0;
    node* ptr1;
    node* ptr2;
    if(l1>l2){
        d=l1-l2;
        ptr1=a;
        ptr2=b;
    }
    else{
        d=l2-l1;
        ptr1=b;
        ptr2=a;
    }
    while(d){
        
        if(ptr1==NULL)   return -1;
        ptr1=ptr1->next;
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2)  return ptr1->data;
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
} 
void evenafterodd(node* &a){
    node* odd=a;
    node* even=a->next;
    node* evenstart=even;
    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
    if(odd->next!=NULL){
        even->next=NULL;
    }
}
bool isPalindrome(node* &head) {
        if(head == NULL || head->next == NULL) return true;
        node* temp1=head;
        display(temp1);
        node* temp=head;
        node* r=recurssiveReverse(temp1);
        
        display(r);
       
        while(temp!=NULL && r!=NULL){
            if(temp->data != r->data)  return false;
            temp = temp->next;  
            r =r->next; 
        }
        
        return true;
       
    }
int main(){

node* a=NULL;
node* b=NULL;
node* head=NULL;

int arr[]={2,1,3,4,5,6};
for(ll i=0;i<6;i++){
    insertAtTail(a,arr[i]);
}
for(ll i=0;i<6;i++){
    insertAtTail(b,arr[i]);
}
merge(a,&b);
display(a);
cout<<isPalindrome(head)<<" ";
//display(head);


}
