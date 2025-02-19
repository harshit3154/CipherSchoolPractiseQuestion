/*
    SOLUTION OF ALL PROBLEM AS A MEMBER FUNCTION OF THE MAIN CLASS.
*/

#include <iostream>
#define SUM(X) X*(X+1)/2.0
#define SUME(X) X*(1+X)
#define SUMO(X) X*X

using namespace std;
class MAIN{
    private : 
        int n;
    public :
        MAIN(){
            int n;
            cout<<"\n\n\t\tEnter the value of n : ";
            cin>>n;
            if(n<0){
                cout<<"\n\n\t\tThe value of number cannot be less than 0 for this program";
            }else{
                this->n=n;
            }
        }

        void sumOfNNaturalNumber();
        void sumOfNOddNaturalNumber();
        void sumOfNEvenNaturalNumber();
        void nFibonacciSequence();
        void factorial();
};

int main(){
    MAIN *p=new MAIN();
    p->sumOfNNaturalNumber();
    p->sumOfNEvenNaturalNumber();
    p->sumOfNOddNaturalNumber();
    p->nFibonacciSequence();
    p->factorial();
}

void MAIN::sumOfNNaturalNumber(){
    cout<<"\n\n\t\tThe sum of "<<n<<" natural number is : "<<SUM(n);
}

void MAIN::sumOfNEvenNaturalNumber(){
    cout<<"\n\n\t\tThe sum of "<<n<<" even natural number is : "<<SUME(n);
}

void MAIN::sumOfNOddNaturalNumber(){
    cout<<"\n\n\t\tThe sum of "<<n<<" even natural number is : "<<SUMO(n);
}

void MAIN::nFibonacciSequence(){
    int a=1,b=1;
    cout<<"\n\n\t\tThe n fibonacci sequence are : "<<a<<"\t"<<b;
    for(int i=0;i<n;i++){
        int temp=a+b;
        a=b;
        b=a+b;
        cout<<"\t"<<b;
    }
}

void MAIN::factorial(){

    if(n<0) return;
    if(n<1)
        cout<<"\n\n\n\t\tThe factorial of n is : "<<1;
    long long fact=1;
    for(int i=1;i<n;i++){
        fact*=i;
    }
    cout<<"\n\n\t\tThe factorail of n is : "<<fact;
}