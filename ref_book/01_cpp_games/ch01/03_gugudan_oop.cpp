// 03_gugudan_oop.cpp

#include <iostream>
using namespace std;

class GuguGame{
private:
	int from;
	int to;
public:
	GuguGame() { set(1, 9); }
	~GuguGame() {}
	
    void set(int f, int t) { from = f; to = t; }

	void play(int dan) {
		cout<<"[객체지향 프로그래밍]\n";
	    cout<<"[구구단 "<<dan<<" 단]\n";

		for (int i = from; i <= to; i++)
		    cout<<dan<<" x"<<i<<"= "<<dan*i<<endl;
            
        cout<<"------------------------"<<endl;
	}
};

int main(){
	// 객체 지향적인 프로그래밍
	GuguGame myGame;

	myGame.play(3);
	myGame.set(2, 5);
	myGame.play(3);
}