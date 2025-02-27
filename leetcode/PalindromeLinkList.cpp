#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

Node* createLinkList(vector<int> &nums){
    Node *head=nullptr,*current,*temp;
    for(auto it:nums){
        temp=new Node(it);
        if(head==nullptr){
            head=temp;
            current=temp;
        }else{
            current->next=temp;
            current=temp;
        }
    }
    return head;
}

void display(Node *head){
    cout<<"\n\n\t\tThe element of the link list are\n\n\t\t\t:";
    while(head){
        cout<<"\t"<<head->data;
        head=head->next;
    }
}


Node* middle(Node* head){

    if(!head || !head->next) return head;
    if(!head->next->next) return head->next;

    Node *slow=head,*fast=head;
    while(fast->next->next && fast){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

int main(){
    vector<int> nums={1,2,3,4,5};
    Node *head=createLinkList(nums);
    Node *mid=middle(head);
    display(head);
    display(mid);
    return 0;
}

for(int i=1;i<arr.lenghth;i++){
    
}