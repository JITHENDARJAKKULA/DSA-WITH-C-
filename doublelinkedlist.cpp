//executing the double linked list
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node( int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
//inserting nodes at head
  void insertathead(node* &head,int val){ //inserting value at head
      node* newnode=new node(val);
      newnode->next=head;
      head->prev=newnode;
      if(head!=NULL){
          head->prev=newnode;
          head=newnode;
      }
  }
  //inserting node at tail
 void inserttail(node* &head,int val){ //insert at tail
     node* newnode=new node(val);
     node* temp=head;
     if(head==NULL){
         head=newnode;
         return ;}
         while(temp->next!=NULL){
             temp=temp->next;
         }
         
         temp->next=newnode;
     newnode->prev=temp;
 }   
 //deletion node at pos
         void deletion(node* &head,int pos){
             node* temp=head;
             int count=1;
             while(temp!=NULL&& count!=pos){
                 temp=temp->next;
                 count++;
             }
             temp->prev->next=temp->next;
             if(temp->next!=NULL){
             temp->next->prev=temp->prev;}
             delete temp;
         }
         //deletion node at head
         void deletionathead(node* &head,int val){
             node* todelete=head;
             head=head->next;
             head->prev=NULL;
             delete todelete;}
         
         //dipalying node
         void display(node* head){
             node* temp=head;
             while(temp!=NULL){
                 cout<<temp->data<<"->";
             temp=temp->next;}
             cout<<"NULL"<<endl;
            
             }
         

int main() {
   node* head=NULL;
   inserttail(head,1);
   inserttail(head,2);
   inserttail(head,30);
   inserttail(head,40);
   inserttail(head,50);
   cout<<"Inserting node at tail\n";
  display(head);
   insertathead(head,90);
   cout<<"Inserting node at head\n";
   display(head);
   deletion(head,6);
   cout<<"Deleting node at pos\n";
   display(head);
   deletionathead(head,1);
   cout<<"Deleting node at head\n";
     display(head);
 return 0;
}