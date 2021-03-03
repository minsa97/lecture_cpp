// 11_rect_area.cpp

#include <iostream>
using namespace std;

int main(){
    int width,height;
    cout<<"너비를 입력하세요>> ";
    cin>>width;

    cout<<"높이를 입력하세요>> ";
    cin>>height;

    int area=width*height;
    cout<<"면적은 "<<area<<endl;

    return 0;
}