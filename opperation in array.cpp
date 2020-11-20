// -----------------------------------------------
// This program to do the many operations in 
// array which the user can create and search
// about any noumbers he wont in it and can add
// any number at any index and delete any index.
// -----------------------------------------------

#include <iostream>
using namespace std;

// Define this global to ca acsses in any Function
int arr[999999];
int Size=0;
bool created=false;
// this Function to create the array

int create()
{
	cout<<"Enter The Size of the array: ";
    cin>>Size;
    for(int i=0;i<Size;i++)
    {
    	cout<<"Enter Element: ";
        cin>>arr[i];
        created=true;
    }
}

// this Function to search about any element in the array
int search( )
{
	int n,loc;
	bool fo=false;
	cout<<"Plz Enter the num to Search :";
    cin>>n;
    for(int i=0;i<Size;i++)
    {
        if(arr[i]==n)
        {
            loc=i+1;
            fo=true;
        }
    }
    if(fo)
    {
        cout<<"found at: "<<loc;
    }
    else
        cout<<"not found";
    cout<<endl;
}

// this Function to insert number in the array
void insertNum()
{
	int position, value;
	cout<<"Enter a position that you need to insert number in it \n";
	cin>>position;
	cout<<"Enter a value for this number \n";
	cin>>value;
	for (int i=Size-1 ;i>=position-1;i--)
		arr[i+1]=arr[i];
	arr[position-1]=value;
	Size++;
}

// this Function to delete number from the array
void deleteNum()
{
    int num,loc,n;
    cout<<"Plz Enter the pos to del :";
    cin>>n;
    int number=arr[n-1];
    for(int i=n-1;i<Size;i++)
    {
        arr[i]=arr[i+1];
    }
    Size--;
}

// this Function to prent the element of the array
void printarr()
{
	for(int i=0;i<Size;i++)
		cout<<" "<<arr[i];
}

void Line()
{
	for(int e=0;e<45;e++)
		cout<<"-";
	cout<<endl;
}

int main() 
{
	int ch, val;
	do 
	{	// to show the user the opperation which the program can do.
		Line();
		cout<<"1) Create an array                           |"<<endl;
		cout<<"2) search about an element                   |"<<endl;
		cout<<"3) Insert element in array                   |"<<endl;
		cout<<"4) Delete element from array                 |"<<endl;
		cout<<"5) Print the array                           |"<<endl;
		cout<<"6) Exit                                      |"<<endl;
		Line();
		cout<<"Enter choice: ";
		cin>>ch;
		switch(ch) 
		{
			case 1: 
			{
				create();
				cout<<endl;
				break;
			}
			case 2: 
			{
				if(!created)
				{
					Line();
					cout<<"|        The array had not created          |"<<endl
						<<"|            Create it first..!             |"<<endl;
					Line();
					break;
				}
				search( );
				cout<<endl;
				break;
			}
			case 3:
			{
				if(!created)
				{
					Line();
					cout<<"|        The array had not created          |"<<endl
						<<"|            Create it first..!             |"<<endl;
					Line();
					break;
				}
				insertNum();
				break;
			}
			case 4: 
			{
				if(!created)
				{
					Line();
					cout<<"|        The array had not created          |"<<endl
						<<"|            Create it first..!             |"<<endl;
					Line();
					break;
				}
				deleteNum();
				cout<<endl;
				break;
			}
			case 5: 
			{
				if(!created)
				{
					Line();
					cout<<"|        The array had not created          |"<<endl
						<<"|            Create it first..!             |"<<endl;
					Line();
					break;
				}
				cout<<"Tha array is : "<<endl;
				printarr();
				cout<<endl;
				break;
			}
			case 6: 
			{
				break;
			}
			default: 
			{
				cout<<"Invalid Choice"<<endl;
				cout<<endl;
			}
		}
	}
	while(ch!=6);
	Line();
	cout<<"                    Exit                    |"<<endl;
	Line();
	return 0;
}
