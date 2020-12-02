#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"Class A"<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"Class B"<<endl;
    }
};
class C{
    public:
    C(){
        cout<<"Class C"<<endl;
    }
};
class D: public A, public B, public C {
    public:
    D(){
        cout<<"Class D"<<endl;
    }
};

int main(){
    D d;
    
return 0;
}