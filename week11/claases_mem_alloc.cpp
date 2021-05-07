#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"Constructor called"<<endl;
    }
    ~A(){
        cout<<"Destructor called"<<endl;
    }
};

void func(){

}

int main(){
    A *a = new A[3];
    cout<<"***"<<endl;
    delete[]a;
    getch();
    return 0;
}
