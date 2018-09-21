#include<iostream>
using namespace std;

struct node
{
  int value;
  node *next;
};



void insert(node* &head,node* &tail,int num)
{
  node* ptr=new node;
  ptr->value=num;
  ptr->next=NULL;

  if(head==NULL)
    {
    head=ptr;
    tail=ptr;
  }
  else
  {
    tail->next=ptr;
    tail=tail->next;
  }
}
node* find(node* &head,node* &tail,int val)
{
  node* current=head;
  while(current->next!=NULL)
  {
    if(current->value==val)
    {
      cout<<"value found : "<<current->value<<endl;
      return current;
    }
    else
    {
      //cout<<"value not found"<<endl;
      return 0;
    }
  }
}
void Delete(node* &head,node* &tail,int val)
{
  node* current=head;
  if (head->value == val)
	{
		head = head->next;
		free(current);
		current = NULL;
	}
  else
  while(current->next!=NULL || current->value==val)
  {
 node *found= find(head,tail,val);
 if(&found!=0)
 {
 delete &found;
 free(found);
 }
 else
 cout<<"value not found"<<endl;
}
}
node display(node* &head)
{
  node* &current=head;
    while(current->next!=NULL)
    {
      cout<<current->value<<endl;
      current=current->next;
    }
    cout<<current->value<<endl;
}

main()
{
//int choice;
node* head=NULL;
node* tail=NULL;
int num,val;
/*cout<<"welcome to data structure"<<endl;
cout<<"press 1 to insert a node "<<endl<<"press 2 to delete a node"<<endl<<"press 3 to search fora node"<<endl<<"press 4 to display whole list"<<endl;
cin>>choice;*/
/*if(choice==1)
{*/
 // cout<<"enter node details to insert"<<endl;
  //cin>>num;
  insert(head,tail,4);
  insert(head,tail,3);
  insert(head,tail,5);
  insert(head,tail,1);
  insert(head,tail,2);
/*}
if(choice==2)
{*/
 // cout<<"enter node details to delete"<<endl;
  //cin>>val;
  Delete(head,tail,3);
  display(head);
/*}
if(choice==3)
{*/
 // cout<<"enter node details you want to find"<<endl;
  //cin>>val;
 find(head,tail,5);
  find(head,tail,7);
/*}
if(choice==4)
{*/

 // cout<<"you have the following linked list in record"<<endl;
 // display(head);
//}
system ("pause");
return 0;
}
