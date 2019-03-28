#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct node{
    int data;
    struct node* next;
}*head;

void _insert_node_at_begining(int data){
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode == NULL)
    {
        cout << "Unable to allocate memory";
    }else{
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
}

void _insert_node_at_given_position(int data, int position){
    int i;
    struct node *newNode, *temp;
    newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode==NULL)
    {
        cout << "unable to allocate memory";
    }
    else{
        newNode->data = data;
        newNode->next = NULL;
        temp=head;
        for(i=2;i<=position-1;i++){
            temp = temp->next;
            if(temp==NULL)
                break;
        }
        if(temp!=NULL)
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
        else{
            cout << "i dont know";
        }
    }
}

void displayList(){
    if(head==NULL)
    {
        cout << "list is empty";
    }
    else{
        struct node* temp = head;
        while(temp->next!=NULL)
        {
            cout << temp->data;
            temp = temp->next;
            cout << "->";
        }
        cout << temp->data;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int position;
        int data;
        cin >> position >> data;
        if(position==0){
            _insert_node_at_begining(data);
        }
        else{
            _insert_node_at_given_position(data,position);
        }
    }
    displayList();
    
    return 0;
}
