//this had overloading using different number of parameters 

#include <iostream>
using namespace std;

class base{
    public:
    int area(int a){
        return a*a;
    }

    int area(int b, int c){
        return c*b;
    }

    int area (float d){
        return 3.14*d*d;
    }
    
};

int main(){
    int a, b, c;
    float d;
    cout<<"sequence is side of square, length,breadth of rectange, radius of circle"<<endl;
    cin>>a>>b>>c>>d;
    base obj;
    cout<<"area of square : "<<obj.area(a)<<endl;
    cout<<"area of rectangle:"<<obj.area(b,c)<<endl;
    cout<<"area of circle : "<<obj.area(d)<<endl;
    return 0;
}

