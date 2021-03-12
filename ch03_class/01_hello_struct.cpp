// 01_hello_struct.cpp

#include <iostream>
using namespace std;

typedef struct _user{
    int age;
    char name[32];
} User;
 
int main(){
    User u = { 20, "John" };
    cout<<u.age<<"\n"<<u.name<<endl;
 
    return 0;
}