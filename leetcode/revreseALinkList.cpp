#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
struct LinkList{
    int data;
    LinkList *next;
    LinkList(int data){
        this->data=data;
        this->next=nullptr;
    }
};

LinkList* createLinkList(vector<int> &nums){
    LinkList *head=nullptr,*current=nullptr,*temp=nullptr;
    for(auto &it:nums){
        if(!head){
            head=new LinkList(it);
            current=head;
        }else{
            temp=new LinkList(it);
            current->next=temp;
            current=temp;
        }
    }
    return head;
}

LinkList* reverseLinkList(LinkList *head){
    if(!head){
        return head;
    }
    LinkList *pre=nullptr,*current=head,*front=current->next?current->next:current;
    while(front->next){
        current->next=pre;
        pre=current;
        current=front;
        front=front->next;
    }
    current->next=pre;
    front->next=current;
    return front;
}

void display(LinkList *head){
    cout<<"\n\n\t\tThe element of the link list are\n\n\t\t\t:";
    while(head->next){
        cout<<head->data;
        head=head->next;
        if(head->next)
            cout<<"  --->  ";
    }
}

int main(){
    vector<int> a{1,2,3,4,5,6,7,8,9,10};
    LinkList *head=createLinkList(a);
    display(head);
    display(head);
    head=reverseLinkList(head);
    display(head);
    return 0;
}