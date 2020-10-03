#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
class ll
{
	private:
		node *head;
	public:
		ll()
		{
			head==NULL;
		}
		void add_end();	
		int count(int key);
		void display();
		void del_dup(int key,int n);
};

void ll::add_end()
{
	int n;
	cout<<"Enter the value:\n";
	cin>>n;
	node *t = new node;
	t->data = n;
	t->next = NULL;
	if(head==NULL)
	{
		head=t;
	}
	else
	{
		node *ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=t;
	}
}

int ll::count(int key)
{
	int count=0;
	node *ptr=head;
	while(ptr!=NULL)
	{
		if(ptr->data==key)
		{
			count++;
		}
		ptr=ptr->next;
	}
	return count;
}

void ll::del_dup(int key,int n)
{
	node *f=head;
	node *b=head;
	for(int i=1;i<=n;i++)
	{
		if(f->data==key)
		{
			b->next=f->next;
		}
	}
}

void ll::display()
{
	node *ptr = head;
	cout<<"Linked List is:\n";
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"\t";
		ptr=ptr->next;
	}
	cout<<"\n";
}

int main()
{
	ll l1;
	int n,key;
	cout<<"Enter the number of nodes you want:\n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		l1.add_end();
	}
	cout<<"Enter the key:\n";
	cin>>key;
	l1.display();
	cout<<"No of occurences of "<<key<<":\n";
	cout<<l1.count(key,n);
}
