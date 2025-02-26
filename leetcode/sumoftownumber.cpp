//  https://leetcode.com/problems/add-two-numbers/submissions/1555643709/

//  https://leetcode.com/problems/add-two-numbers/submissions/1555648842/

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

Node* createLinkList(vector<int> &nums){
    Node *head=nullptr,*current,*temp;
    for(auto &it:nums){
        temp=new Node(it);
        if(head==nullptr){
            head=temp;
            current=temp;
        }else{
            current->next=temp;
            current=temp;
        }
    }
    return  head;
}

void display(Node *head){
    cout<<"\n\n\t\tThe value of the linklist is\n\n\n\t\t\t:";
    while(head){
        cout<<head->data;
        if(head->next)
            cout<<" --->  ";
        head=head->next;
    }
}

Node* add(Node *a,Node *b,int carry){
    if( !a && !b && !carry) return nullptr;
    int sum=0;
    sum+=a?a->data:0;
    a=a?a->next:a;
    sum+=b?b->data:0;
    b=b?b->next:b;
    sum+=carry;
    Node *temp=new Node(sum%10);
    temp->next=add(a,b,sum/10);
    return temp;
}

Node* add(Node *a,Node *b){
    Node *head=nullptr,*temp,*current;
    int carry=0;
    while(a || b || carry){
        int sum=0;
        sum+=a?a->data:0;
        a=a?a->next:a;
        sum+=b?b->data:0;
        b=b?b->next:b;
        sum+=carry;
        temp=new Node(sum%10);
        carry=sum/10;
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

Node* reverseLinkList(Node* head){
    if(!head || !head->next)  return head;
    Node *pre=nullptr;
    while(head){
        Node *front=head->next;
        head->next=pre;
        pre=head;
        head=front;
    }
    return pre;
}

Node* swapPair(Node* a){
   if( !a || !a->next){
        return a;
   }
   Node *second=a->next,*front=second->next;;
   second->next=a;
   a->next=swapPair(front);
   return second;
}

Node* swapPair2(Node* a){
    if( !a && !a->next) return a;
    Node *pre=nullptr,*first=a,*second=a->next,*ans=nullptr;
    while(first){
        Node *front=second->next;
        if(!ans) ans=second;
        if(pre)
            pre->next=second;
        second->next=first;
        pre=first;
        first=front;
        second=first->next;
    }
    return ans;
}

int main(){
    vector<int> a{1,2,9,4};
    vector<int> b{1,2,3,4};
    Node *num1=createLinkList(a);
    Node *num2=createLinkList(b);
    Node *ans=add(num1,num2);
    Node *ans2=add(num1,num2,0);
    display(num1);
    display(num2);
    display(ans);
    display(ans2);
    Node *rev=reverseLinkList(num1);
    Node *rev2=reverseLinkList(num2);
    display(rev);
   display(rev2);
    Node *swap=swapPair2(rev);
    display(swap); 
    return 0;
}