#include <iostream>
using namespace std;

class base {
    public:

    virtual void show (){
        cout<<"virtual here prevents ambiguity";

    }
};

class dr1:virtual public base{
    public:

    void fn1 (){
        cout<<"basic fn 1";
    }
};

class dr2:virtual public base{
    public:

    void fn2 (){
        cout<<"basic fn 2";
    }
};

class finn:public dr1, public dr2{
    public:

    void fn3 (){
        cout<<"basic fn 3";
    }    
};

int main (){
    finn obj;
    obj.show();
    return 0;
}
