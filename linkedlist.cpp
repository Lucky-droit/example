#include<iostream> 
using namespace std;
class Node{
public : 
int data ; 
Node* next ;

  Node() {
  data=0;
  next=NULL;
  }
  Node(int data){
    this->data =data;
    this->next =NULL;
  }
};
class LinkedList{
public : 
Node*head;

public : 
LinkedList(){head=NULL;}
void insert(int ) ; 
void pop();
void traverse();
Node* r_traverse(Node*);
};

Node* LinkedList::r_traverse(Node*head){
  Node*temp = head;
  if(temp->next!=NULL){
    cout<<temp->data;
    return r_traverse(temp->next);
   
    }
  return NULL;
  
   
  
    
}
void LinkedList::pop(){
  Node*temp = head;
  while(temp->next->next!=NULL){
    temp=temp->next;
    }
  temp->next = NULL;
}
void LinkedList::traverse(){
  Node*temp = head;
  while(temp!=NULL){
    cout<<temp->data;
    temp=temp->next;
    }
}

void  LinkedList::insert(int data){
  Node *newnode  = new Node(data);
  if(head==NULL){
  head = newnode ;
  return ;
  }
  Node*temp = head;
  while(temp->next!=NULL){
    temp =temp->next;
    }
  temp->next = newnode;
}


int main(){
  LinkedList LL ; 
  LL.insert(34);
  LL.insert(10);
  LL.insert(20);
  LL.insert(50);
  LL.r_traverse(LL.head);
return 0 ; 
}
