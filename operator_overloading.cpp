//an unary operator is overloaded using data member
#include <iostream>
using namespace std;

class base{
    public:
    int a;
    base(int x){
        a=x;
    }
    
    void operator++(){
        a++;
    }
};

int main(){
    base b(5);
    
    ++b;
    cout<<b.a;
    return 0;
}
