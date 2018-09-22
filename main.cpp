#include<iostream>
using namespace std;

struct node
{
  int value;
  node *next;
};



void insert(int val)
{
  node *start=new node;;
  node *current=new node;;



  node* ptr=new node;
  ptr->value=val;
  ptr->next=NULL;

  if(start==NULL)
    {
    start=ptr;
  }
  else
  {
    while(current->next!=NULL)
   {
     current=current->next;
  }
   current->next=ptr;
  }
}
node* find(int val)
{
  node *start;
  node* current=start;
  while(current->next!=NULL)
  {
    if(current->value==val)
    {
      cout<<"value found : "<<current->value<<endl;
      return current;
    }
    else
    {
      cout<<"value not found"<<endl;
      return NULL;
    }
  }
}
void Delete(int val)
{
  struct node *start;
  node* current=start;
  if (current->value == val)
	{
		current =current ->next;
		free(current);
		current = NULL;
	}
  else
  {
  node* prev=start;
 node* current=start->next;
  
  while( current->value==val)
  {
 
 if(current->next==NULL)
 {
   cout<<"required value not found in list"<<endl;
 }
 else
 {
   prev=prev->next;
   current=current->next;
 }
  }
 prev->next=current->next;
 free(current);
 current=NULL;
 cout<<"node deleted"<<endl;
  }
}
void display(node* &start)
{
  node* current=start;
    while(current->next!=NULL)
    {
      cout<<current->value<<endl;
      current=current->next;
    }
    cout<<current->value<<endl;
}

int main()
{
//int choice;
node *start;
int val;
/*cout<<"welcome to data structure"<<endl;
cout<<"press 1 to insert a node "<<endl<<"press 2 to delete a node"<<endl<<"press 3 to search fora node"<<endl<<"press 4 to display whole list"<<endl;
cin>>choice;*/
/*if(choice==1)
{*/
 // cout<<"enter node details to insert"<<endl;
  //cin>>num;
   insert(1);
  insert(2);
  insert(3);
  insert(4);
  insert(5);
 
/*}
if(choice==2)
{*/
 // cout<<"enter node details to delete"<<endl;
  //cin>>val;
 Delete(3);
  display(start);
/*}
if(choice==3)
{*/
 // cout<<"enter node details you want to find"<<endl;
  //cin>>val;
  find(5);
   find(7);
  

/*}
if(choice==4)
{*/

 // cout<<"you have the following linked list in record"<<endl;
 // display(head);
//}
system ("pause");
return 0;
}
