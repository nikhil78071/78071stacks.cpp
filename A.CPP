
#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#define Z 10

template <class X>

class Stack
{
X arr[Z];

 public:

     X i,r;
     int top;

     Stack()
     {
      top=-1;
     }

     void push(X a)
     {
      if(top==Z)
      cout<<"Stack is full";
      else
      arr[++top] = a;
     }

     X pop()
     {
if(top==-1)
{
cout<<"Stack is empty!";

}
else
return arr[top--];
     }

     void clear()
     {
while(top!=-1)
{
cout<<arr[top--]<<"->";
}
cout<<"NULL\n";


     }

     void display()
  {
   if(top>=0)
  {
    cout<<"Stack elements are:\n";
    for(int j=top;j>=0;j--)
   {
    cout<<arr[j]<<" ";
    }
    cout<<endl;
 }
    else
    {
    cout<<"Stack is empty!"<<endl;
    }
    }

    void topele()
    {
    if(top==-1)
    {
     cout<<"Stack is empty!"<<endl;
     }
     else
    {
    cout<<"top element is:\n"<<arr[top];
    }
    }
};
int main()
{
    clrscr();
    Stack <int>p;
    int n;
    while(1)
    {
cout<<"\n1.PUSH\n2.POP\n3.CLEAR\n4.DISPLAY\n5.TOPELEMENT\n6.EXIT\n";
cout<<endl;
cout<<"Enter your choice:";
cin>>n;
switch(n)
{
 case 1:
 cout<<"\nEnter the value to be push:";
 cin>>p.i;
 p.push(p.i);
 break;
 case 2: p.r = p.pop();
 cout<<"\nValue popped out is:"<<p.r;
 cout<<endl;
 break;
 case 3: p.clear();
 break;
 case 4: p.display();
 break;
 case 5: p.topele();
 break;
 case 6: exit(0);
}
    }
getch();
return 0;
}
