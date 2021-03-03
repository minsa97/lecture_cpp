// 21_cin_ignore.cpp

#include <iostream>
using namespace std;
int main(){
    char word[100], name[100];
    int number;

    cout<<"number: ";
    cin>>number;
    //cin.ignore();
    cout<<"number = "<<number<<endl;

    cout<<"word: ";
    cin.getline(word, 100);
    cout<<"word = "<<word<<endl;

    cout<<"name: ";
    cin.getline(name, 100);
    cout<<"word = "<<name<<endl;

    return 0;
}