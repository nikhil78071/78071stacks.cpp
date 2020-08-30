#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Z 20

template <class X>

class Stack
{
X arr[Z];

public:
     X item;
     int top;

Stack()
{
top=-1;
}

void push(X p)
{
if(top==Z)
cout<<"Stack is full."<<endl;
else
arr[++top]=p;
}

X pop()
{
if(top!=-1)
return arr[top--];
}

void clear()
{
while(top!=-1)
{
cout<<arr[top--];
}
}
};
int main()
{
clrscr();
Stack <int>s1,s2,s3;
int t;
int sum,n;
sum=0,t=0;
cout<<endl;
cout<<"Enter the first number and -1 when you are done:";
for(int i=0;n!=-1;++i)
{
cin>>n;
if(n!=-1)
{
s1.push(n);
}
}
n=0;
cout<<endl;
cout<<"Enter the second number and -1 when you are done:";
for (i=0;n!=-1;++i)
{
cin>>n;
if(n!=-1)
{
s2.push(n);
}
}
t=0;
while(s1.top!=-1 && s2.top!=-1)
{
t=t+s1.pop()+s2.pop();
s3.push(t%10);
t=t/10;
}
if(s1.top!=-1)
{
while(s1.top!=-1)
{
s3.push(t+s1.pop());
t=0;
}
}
if(s2.top!=-1)
{
while(s2.top!=-1)
{
s3.push(t+s2.pop());
t=0;
}
}
if(t!=0)
{
s3.push(t);
}
cout<<endl;
cout<<"The Result is:";
s3.clear();
getch();
return 0;
}