// 05_file_test.cpp

#include <fstream>
using namespace std;

int main(){
    ofstream square_file;
    square_file.open("square.txt");
    for(int i=0;i<10;i++){
        square_file<<i<<"^2 = "<<i*i<<endl;
    }
    square_file.close();

    return 0;
}