// 02_hello_struct_func.cpp

#include <iostream>
using namespace std;

typedef struct _user{
    int age;
    char name[32];
} User;

void PrintUser(User *p){
    cout<<p->age<<"\n"<<p->name<<endl;
}

int main(){
    User u = { 20, "John" };
    cout<<u.age<<"\n"<<u.name<<endl;
    PrintUser(&u);
 
    return 0;
}