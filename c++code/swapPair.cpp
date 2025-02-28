#include <iostream>
#define SWAP(X,Y){ X+=Y; Y=X-Y; X=X-Y;}

using namespace std;

template <typename T>
void swapG(T &a,T &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

void swapT(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void swapA(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}

void swapM(int &a,int &b){
    a=a*b;
    b=a/b;
    a=a/b;
}

void swapXor(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

void display(int a,int b){
    cout<<"\n\n\t\tThe value of a and b are : ";
    cout<<a<<", "<<b;
}
int main(){
    int a=10,b=20;
    display(a,b);
    swap(a,b);
    display(a,b);
    SWAP(a,b);
    display(a,b);
    swapA(a,b);
    display(a,b);
    swapM(a,b);
    display(a,b);
    swapXor(a,b);
    display(a,b);
    return 0;
}