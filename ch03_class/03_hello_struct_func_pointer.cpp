// 03_hello_struct_func_pointer.cpp

#include <iostream>
using namespace std;

typedef struct _user{
    int age;
    char name[32];
    void(*Print)(struct _user*);
} User;

void PrintUser(User *p){
    cout<<p->age<<"\n"<<p->name<<endl;
}

int main(){
    User u = { 20, "John", PrintUser};    
    u.Print(&u);
 
    return 0;
}