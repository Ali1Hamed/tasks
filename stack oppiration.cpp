// ---------------------------------------------------------
// This Program to do many operations  in stack
// The like array which in it "Fist in Last out"
// >>>>> ""FILO"" 
// That’s mean  that in it the first add to it be last out
//----------------------------------------------------------

#include <iostream>
using namespace std;

// Defin this type Glopal to can acsses it in any plase
int stack[100], n=100, top=-1;

//This function to add ellement to the stack
void push(int val) 
{
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else 
	{
		top++;
 		stack[top]=val;
	}
}

//This function to delete ellement from the stack
void pop() 
{
   if(top<=-1)
		cout<<"Stack Underflow"<<endl;
   else 
   {
		cout<<"The popped element is "<< stack[top] <<endl;
		top--;
   }
}

void Line()
{
	for(int e=0;e<30;e++)
		cout<<"-";
	cout<<endl;
}

//This function to print the ellements of the stack
void display() 
{
   if(top>=0) {
		cout<<"Stack elements are:";
		for(int i=top; i>=0; i--)
		cout<<stack[i]<<" ";
		cout<<endl;
   } 
   else
		cout<<"Stack is empty";
}

int main() 
{
		int ch, val;
		do 
		{ //to print the opption to the users
			Line();
			cout<<"1) Push in stack             |"<<endl;
			cout<<"2) Pop from stack            |"<<endl;
			cout<<"3) Display stack             |"<<endl;
			cout<<"4) Exit                      |"<<endl;
			Line();
			cout<<"Enter choice: ";
			cin>>ch;
			switch(ch) 
			{
				case 1: 
				{
					cout<<"Enter value to be pushed:"<<endl;
					cin>>val;
					push(val);
					break;
				}
				case 2: 
				{
					pop();
					break;
				}
				case 3:
				{
					display();
					break;
				}
				case 4: 
				{
					cout<<"Exit"<<endl;
					break;
				}
				default: 
				{
					cout<<"Invalid Choice"<<endl;
				}
			}
		}
		while(ch!=4);
	return 0;
}
