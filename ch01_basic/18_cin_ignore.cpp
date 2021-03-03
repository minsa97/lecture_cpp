// 18_cin_ignore.cpp

#include <iostream>
#include <string>
using namespace std;

int main(){
    char selection;
    string firstAlphabet;

    cout<<"[a]pple"<<endl;
    cout<<"[b]anana"<<endl;
    cout<<"[c]herry"<<endl; 
    cout<<"[q]: exit"<<endl;
    cout<<endl;

    cout<<"select your fruit: ";
    cin>>selection;
    //cin.ignore();

    while(selection!='q'){
        switch(selection){
        case 'a':
            cout<<"color is red"<<endl;
            break;
        case 'b':
            cout<<"color is yellow"<<endl;
            break;
        case 'c':
            cout<<"color is dard red"<<endl;
            break;
        default:
            cout<<"sorry!!"<<endl;
        }

        cout<<"select your fruit: ";
        cin>>selection;
        //cin.ignore();
    }

    return 0;
}