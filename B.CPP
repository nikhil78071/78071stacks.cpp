
#include <iostream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
struct node
{
int info;
struct node *next;
};
struct node* top = NULL;
struct node* temp;
void push(int n)
{
temp=new node;
temp->info=n;
temp->next=top;
top=temp;
}
void pop()
{
if(top==NULL)
cout<<"Stack Underflow."<<endl;
else
{
cout<<"The popped element is:"<<top->info<<endl;
top=top->next;
}
}
void display()
{
struct node* ptr;
if(top==NULL)
cout<<"Stack is empty!";
else
{
ptr = top;
cout<<"Stack elements are:";
while (ptr != NULL)
{
cout<<ptr->info<<" ";
ptr=ptr->next;
}
}
cout<<endl;
}
void clear()
{
if(top==NULL)
{
cout<<"Stack is empty!"<<endl;
}
else
{

while(top!=NULL)
{
temp=top;
top=top->next;
free(temp);
}
cout<<"Stack is cleared.\n";
}
}
void topele()
{
if(top==NULL)
{
cout<<"Stack is empty!"<<endl;
}
else
{
cout<<"Top element of stack is:"<<top->info<<endl;
}
}
int main()
{
clrscr();
int k, n;
cout<<endl;
cout<<" 1. Push\n 2. Pop\n 3. Display\n 4. Clear\n 5. Top Element\n 6. Exit"<<endl;
do
{
cout<<endl;
cout<<"Enter choice:";
cin>>k;
switch(k)
{
case 1: {
   cout<<"Enter value to be pushed:";
   cin>>n;
   push(n);
   break;
}
case 2: {
   pop();
   break;
}
case 3: {
   display();
   break;
}
case 4: {
 clear();
 break;
}
case 5: {
  topele();
  break;
  }


case 6: {
   exit(0);

}

     default: {
   cout<<"Invalid Choice!"<<endl;
}
      }
}while(k!=7);
getch();
return 0;
}