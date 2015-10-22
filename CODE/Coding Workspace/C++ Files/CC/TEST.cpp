#include <bits/stdc++.h>
using namespace std;
#define readFile freopen("E:/Shreyans/Documents/Coding Workspace/STDINPUT.txt","r",stdin);
#define boostIO ios_base::sync_with_stdio(false)
#define ld long double
#define ll long long int
#define CLR(s) memset(&s, 0, sizeof(s))
#define scani(s) scanf("%d",&s)
#define scanl(s) scanf("%lld",&s)
#define hashset unordered_set //JAVA feels :')
#define hashmap unordered_map
#define pll pair<ll,ll>
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl '\n'

class LinkedList
{
private:
	struct node
	{
		int data;
		node* next;
	};
	node* head;
	node* temp;
public:
	LinkedList()
	{
		head=head->next=NULL;
	}
	void InsertNode(int key)
	{
		node* n=new node(); 
		n->data=key;
		n->next=NULL;
		if(head!=NULL)
		{
			temp=head;
			while(temp->next!=NULL)
				temp=temp->next;
			temp->next=n;
		}
		else
			head=n;
	}

	void PrintNode()
	{
		temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
};


int main()
{
	LinkedList l;
	l.InsertNode(5);
	l.InsertNode(7);
	l.InsertNode(10);
	l.PrintNode();
}