#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Node{
    public : 
        int data;
        Node *next;
        Node(int data){
            this->data=data;
            this->next=nullptr;
        }
};

Node* createLinkList(vector<int> &nums,Node *head){
    Node *current=nullptr;
    for(auto &it:nums){
        if(!head){
            head=new Node(it);
            current=head;
        }else{
            current->next=new Node(it);
            current=current->next;
        }
    }
    return head;
}

int countNode(Node* head){
    //  https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1
    int count=1;
    while(head->next){
        count++;
        head=head->next;
    }
    return count;
}

Node* insertAtEnd(Node *head,int x){
    //  https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1
    Node *slow=head,*fast=head;
    while(slow && slow->next && fast->next && fast->next->next){
        slow=slow->next;
        fast=fast->next;
    }
    while(fast->next){
        fast=fast->next;
    }
    fast->next=new Node(x);
    return head;
}

Node* mid(Node *head){
    Node *fast=head;
    if( !head || !head->next){
        return head;
    }
    while(fast && fast->next && fast->next->next){
        head=head->next;
        fast=fast->next->next;
    }
    return head;
}

bool searchEle(Node* head,int x){
    //  https://www.geeksforgeeks.org/problems/search-in-linked-list/1
    while(head){
        if(head->data==x){
            return true;
        }
        head=head->next;
    }
    return false;
}

void display(Node *head){
    cout<<"\n\n\t\tThe element of the link list are : ";
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main(){
    vector<int> nums{1,2,3,4,5,6,7,8};
    Node *head=nullptr;
    head=createLinkList(nums,head);
    display(head);
    insertAtEnd(head,9);
    display(head);
    insertAtEnd(head,10);
    display(head);
    cout<<"\n\n\t\t\tThe middle of the linklist is : "<<mid(head)->data;
}
