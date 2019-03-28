#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*head;
void insert_node_at_beginning(int n)
{
    
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node*));
        if(newnode!=NULL)
        {
            newnode->data=data;
            newnode->next=head;
            head=newnode;
        }
    }
}

void display_L_list()
{
    if(head!=NULL)
    {
        struct node *temp=head;
        while(temp->next!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<temp->data;
    }
}

int main() 
{
    int n;
    cin>>n;
    insert_node_at_beginning(n);
    display_L_list();
    return 0;
}
