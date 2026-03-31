#include <iostream>
#include <cstdio>
using namespace std;


int sum(int a, int b, int c, int d){
    
    if(a>b&&a>c&&a>d){
        cout<<a;
    }
    else if(b>a&&b>c&&b>c){
        cout<<b;
    }
    else if(c>a&&c>b&&c>d){
        cout<<c;
    }
    else{
        cout<<d;
    }
    return 0;
}

int main(){
    int a, b, c, d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    sum(a, b, c, d);
    return 0;
    
}
