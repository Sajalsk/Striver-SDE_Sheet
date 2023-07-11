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

void Delete(Node *head,int i)
{
    Node *temp=head;
    int count=0;
    
    while(count<i-1)
    {
        temp=temp->next;
        count++;
    }
    
    Node *a=temp->next;
    Node *b=a;
    temp->next=b;
    
    delete a;
}

int main()
{
    int i;
    cin>>i;
    
    Node *head=takeInput();
    print(head);
    
    Delete(head,i);
    print(head);
}


