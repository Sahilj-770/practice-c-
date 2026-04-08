//this has and abstract class with virtual function which ahs been overridden later

#include <iostream>
using namespace std;

class base {
    public:
    virtual void fn1()=0;
};

class derived:virtual public base {
    public:
        void fn12() {
            cout<<"this is an abstract derived virtual class";
        }

};

class derived1:virtual public base {
    public:
        void fn13() {
            cout<<"hello ";
        }

};

class finn:public derived1, public derived {
    public:
        void fn1() override{
            cout<<"this is an abstract derived virtual class";
        }

};

int main (){
    finn obj;
    obj.fn1();
    return 0;
}
