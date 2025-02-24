/*

https://leetcode.com/problems/reverse-linked-list/submissions/1553807851/
reverseLinkList problem.

*/

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
    if(!head || !head->next){
        return head;
    }
    LinkList *pre=nullptr,*current=head;
    while(current){
        LinkList *front=current->next;
        current->next=pre;
        pre=current;
        current=front;
    }
    return pre;
}


LinkList* reverseLinkList1(LinkList *head){
    LinkList *pre=nullptr;
    while(head->next){
        LinkList *next=head->next;
        head->next=pre;
        pre=head;
        head=next;
    }
    head->next=pre;
    return head;
}
void display(LinkList *head){
    cout<<"\n\n\t\tThe element of the link list are\n\n\t\t\t:";
    while(head){
        cout<<head->data;
        if(head->next)
        cout<<"  --->  ";
        head=head->next;
    }
}

int main(){
    vector<int> a{1,1,2,1};
    LinkList *head=createLinkList(a);
    display(head);
    display(head);
    head=reverseLinkList(head);
    display(head);
    head=reverseLinkList1(head);
    display(head);
    return 0;
}