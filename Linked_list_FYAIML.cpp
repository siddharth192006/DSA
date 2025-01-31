#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	// Create the NODE strcuture
	struct NODE{
		int data;
		struct NODE *Link;
	}*head=NULL,*temp,*t,*p;
	
	
	// Head: points to first node in Linked list
	// temp: Newly created Note
	// t: temporary pointer which used to traverse the Linked List
	
	int ch,ch1,ch2,data,x;
	do{
	
		cout<<"\n \t 1. Create the Linked List \n\t 2. Display the Linked List";
		cout<<"\n \t Which operation you wan to perform??";
		cin>>ch1;
		
		switch(ch1)
		{
			case 1:
				do{
				temp=(struct NODE*)malloc(sizeof(struct NODE));
				cout<<"Enter the Data::";
				cin>>x;
				temp->data=x;
				
				cout<<"Node is created!!";
				cout<<"Do you want to add more Nodes in LL?? \n\t 1: Yes \t 2:NO";
				cin>>ch2;
			}while(ch2!=2);
			cout<<"\n The Linked List created as::";
			t=head;
			while(t!=NULL)
			{
				cout<<"\t"<<t->data;
				t=t->Link;
			}
		}
		cout<<"\n Do you want to Continue?? Enter 1: YES 2: NO";
		cin>>ch;
	}while(ch!=2);
}
