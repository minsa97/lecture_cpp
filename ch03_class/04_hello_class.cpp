// 04_hello_class.cpp

#include <iostream>
#include <cstring>
using namespace std;

class User{
public:
    int age;
    char name[32];
    void Print(){
        cout<<age<<"\n"<<name<<endl;
    }
};

int main(){
    User u;
    u.age=20;
    strcpy(u.name,"John");
    u.Print();
 
    User v={30,"Clair"};
    v.Print();
    
    return 0;
}