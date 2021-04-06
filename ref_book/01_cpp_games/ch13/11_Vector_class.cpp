// 11_Vector_class.cpp

#include <iostream>
using namespace std;

class Vector {
	double*	arr;
	int	dim;
	int	maxCapacity;
public:
	Vector(int d = 0) : dim(0), maxCapacity(0), arr(NULL) {
		resize((d>4) ? d : 4);
		dim = d;
	}
	Vector(Vector& v) :arr(NULL) { clone(v); }
	~Vector()	 { delete[] arr; }

	void resize(int size) {
		if (size > maxCapacity) {
			double*	old = arr;
			maxCapacity = size;
			arr = new double[maxCapacity];
			for (int i = 0; i < dim; i++)
				arr[i] = old[i];
			delete[] old;
		}
	}
	Vector& clone(Vector& v) {
		delete[] arr;
		dim = v.dim;
		maxCapacity = v.capacity();
		arr = new double[maxCapacity];
		for (int i = 0; i < dim; i++)
			arr[i] = v[i];
		return *this;
	}
	Vector& operator=(Vector& v) { return clone(v); }

	int size() { return dim; }
	int capacity() { return maxCapacity; }
	bool empty() { return dim == 0; }
	void clear() { dim = 0; }

	double front() { return arr[0]; }
	double back() { return arr[dim - 1]; }
	double&	at(int id) { return arr[id]; }
	double& operator[] (int id)	{ return arr[id]; }

	void pop_back() { dim--; }
	void push_back(double val)	{
		if (dim == maxCapacity)
			resize(maxCapacity * 2);
		arr[dim++] = val;
	}

	friend ostream& operator << (ostream& os, Vector& v) {
		os << "< ";
		for (int i = 0; i < v.dim; i++)
			os << v[i] << " ";
		os << ">";
		return os;
	}
};

int main(){
	Vector v, u;
	for (int i = 0; i < 25; i++)
		v.push_back(rand() % 10);
	cout << " v(push_back()) : " << v << endl;

	for (int i = 0; i < 5; i++) {
		v.at(i) = 0;
		v[10+i] = 9;
	}
	cout << " v(at(i),v[i])  : " << v << endl;

	for (int i = 0; i < 15; i++)
		v.pop_back();
	cout << " v(pop_back())  : " << v << endl;

	u = v;
	cout << " u=v (깊은복사) : " << u << endl;

    return 0;
}