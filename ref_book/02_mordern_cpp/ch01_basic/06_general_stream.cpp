// 06_general_stream.cpp

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void write_something(std::ostream& os){
    os << "Hi stream, did you know that 3 * 3 = " << 3 * 3 << endl;
}

int main (int argc, char* argv[]){
    ofstream myfile("example.txt");
    stringstream mysstream;

    write_something(cout);
    write_something(myfile);
    write_something(mysstream);

    std::cout << "mysstream is: " << mysstream.str(); // newline contained

    return 0;
}