// 10_Average_Point_class.cpp

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

template <typename T>
class Point {
	T	x, y;
public:
	Point(T xx = 0, T yy = 0) : x(xx), y(yy) { }
	double magnitude() { return sqrt((double)x*x + y*y); }
	Point operator+(Point p) { return Point(x + p.x, y + p.y); }
	Point operator-(Point p) { return Point(x - p.x, y - p.y); }

	friend Point<double> operator*(double s, Point p) {
		return Point<double>(s*p.x, s*p.y);
	}

	friend ostream& operator << (ostream& os, const Point& p) {
		os << "(" << p.x << "," << p.y << ")";
		return os;
	}
};

Point<double> average(Point<int> arr[], int len){
    Point<int> sum(0,0);
    for(int i=0;i<len;i++)
        sum=sum+arr[i];
    return (1./len)*sum;
}

int main() {
    srand(time(0));
    
	Point<int> arr[5];
    for(int i=0;i<5;i++){
        arr[i]=Point<int>(rand()%10, rand()%10);
        cout<<" "<<arr[i];
    }
    Point<double> avg=average(arr,5);
	cout << "\n평균좌표 = " << avg << endl;

    return 0;
}