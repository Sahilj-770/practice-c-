//this prgrams uses array and classes to take inp of 5 students marks andi display with info
#include <iostream>
using namespace std;

class base {
    public :
    int rollno, marks;
    string name;

    void inp(){
        
        cout<<"enter roll no: "<<endl;
        cin>>rollno;
        cout<<"enter name of student: "<<endl;
        cin>>name;
        cout<<"enter marks of thr student: "<<endl;
        cin>>marks;
    }

    void display(){
        cout<<"roll no: "<<rollno<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"marks: "<<marks<<endl;
    }
};

int main(){
    base b[5];

    for(int i = 0; i<5; i++){
        b[i].inp();
    }
    for(int i = 0; i<5; i++){
        b[i].display();
    }

    return 0;

}
