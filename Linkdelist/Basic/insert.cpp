#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    
    Node (int data)
    {
        this->data=data;
        next=NULL;
    }
};

Node* takeInput()
{
    int data;
    cin>>data;
    Node *head=NULL;
    
    while(data!= -1)
    {
        Node *newNode = new Node(data);
        
        if (head==NULL)
        {
           head=newNode;
        }
        
        else
        {
            Node *temp=head;
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            
            temp->next=newNode;
        }
    
        cin>>data;
    }
    
      return head;
}

void print(Node *head)
{
   while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

void Insert(Node *head,int i,int data)
{
    Node *newNode= new Node(data);
    Node *temp=head;
    int count=0;
    
    while (count<i-1)
    {
        temp=temp->next;
        count++;
    }
    
    Node *a= temp->next;
    temp->next=newNode;
    newNode->next=a;
}

int main()
{
    int i,data;
    Node *head=takeInput();
    print(head);
    cin>>i>>data;
    Insert(head,i,data);
    print(head);
    
}


