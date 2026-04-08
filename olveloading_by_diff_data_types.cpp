//this has swapping by using overloading and different data types.
#include <iostream>
using namespace std;

class base{
    public:
    void area(int a, int b){
        int temp;
        temp = a;
        a = b;
        b = temp;
        
        cout<<"the integers have been swapped, first one now is "<<a<<" second one now is "<<b<<endl;
    }

    void area(float c, float d){
        float temp;
        temp = c;
        c = d;
        d = temp;
        
        cout<<"the floats have been swapped, first one now is "<<c<<" second one now is "<<d<<endl;
        
    }

    
};

int main(){
    int a, b;
    float c, d;
    cout<<"sequence is first 2 integers, second 2 floats "<<endl;
    cin>>a>>b>>c>>d;
    base obj;
    obj.area(a, b);
    obj.area(c, d);
    return 0;
}

