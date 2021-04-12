#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int val){
        data=val;
        next=NULL;
    }
};
void PrintLinkedList(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
       head= head->next;
      
    }
     cout<<"null";
}
void InsertAtTail(node* &head,int val){
    node* n =new node(val);

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


// node* Insert(node *head,int newData){
//     node *newNode =new node();
//     newNode -> data =newData;
//     newNode -> next=head;
//     head=newNode;
//     return head;
// }
// 2nd method for insertion in begining or front

// void push(node **head_ref,int newData){
//     node *newNode=new node();
//     newNode->data=newData;
//     newNode->next=*head_ref;
//     *head_ref=newNode;
// }
// void InsertAfter(node *prevNode,int newData){
//     node *newNode=new node();
//     newNode->data=newData;
//     newNode->next=prevNode->next;
//     prevNode->next =newNode;
// }

// void end(node **head_ref,int newdata){
//     node *newNode=new node();
//     newNode->data=newdata;
//     newNode->next=NULL;

//     node* last=*head_ref;

//     if(*head_ref==NULL){
//         *head_ref=newNode;
//         return;
//     }
//     while(last->next!=NULL){
//         last=last->next;
//     }
//     last->next=newNode;
//     return;
// }

// void deleteNode(node **head_ref,int key){
//     node *prev,*temp;
//     temp=*head_ref;
//     if(temp!=NULL && temp->data==key){
//         *head_ref=temp->next;
//         free(temp);
//         return;
//     }
//     while(temp!=NULL && temp->data!=key){
//         prev=temp;
//         temp=temp->next;
//     }
//     if(temp==NULL)
//         return;

//     prev->next=temp->next;
//     free(temp);
// }
int main(){
    node *head=NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
         PrintLinkedList(head);
}
//
// }
    // node *second=new node();
    // node *t=new node();
    // node *f=new node();

    // head->data=5;
    // head->next=t;
    // t->data=8;
    // t->next=f;
    // f->data=14;
    // f->next=second;

    // second->data=6;
    // second->next=NULL;
    // head=Insert(head,4);
    // 2nd method for front without return
    // push(&head,3);

    // InsertAfter(head->next,12);

    // end(&head,90);
    // PrintLinkedList(head);
    // cout<<"After Delete:"<<endl;
    // deleteNode(&head,14);
    // PrintLinkedList(head);
