#include<iostream>
using namespace std;

class node{
  public:
  int data;
  node * next;
  node(){
   next =NULL;
  };

class linkedlist{
  public:
  node* head;
  node* tail;
  linkedlist(){
  head=NULL;
  tail=NULL;
   }
void insert(int value){
 node* temp=new node;
 temp->data=value;
 if(temp=NULL){
  head=temp;
   }
 else{
  tail->next=temp;
  }
  tail=temp;
     }
void insertat(int pos,int value){
     node* current=head;
     int i=1;
     while(i<pos-1){
     i++;
     current=current->next;
       }
     node* temp=new node;
     temp->data=value;
     temp->next=current->next;
     current->next=temp;
     }
void delet(){
     node* temp=tail;
     node* current = head;
     while(current->next!=tail){
     current = current->next;
     current->next=NULL;
      }
     tail=current;
     delete temp; 
       }
void display(){
     node * current=head;
     while(current !=NULL){
     cout<<current->data<<"->";
     current = current->next;
         }
     cout<<endl;
       } 
     };
   

int main(){
    linkedlist l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.display();
    l1.delet();
    l1.display();
    l1.insertat(2,8);
    l1.display();
    return 0;
}

     
     










   
   

  
