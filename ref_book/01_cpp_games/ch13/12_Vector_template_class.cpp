// 12_Vector_template_class.cpp

#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Vector {
	T* arr;
	int dim;
	int maxCapacity;
public:
	Vector(int d = 0) : dim(0), maxCapacity(0), arr(NULL) {
		resize((d>4) ? d : 4);
		dim = d;
	}
	Vector(Vector<T>& v) :arr(NULL) { clone(v); }
	~Vector() { delete[] arr; }

	void resize(int size) {
		if (size > maxCapacity) {
			T* old = arr;
			maxCapacity = size;
			arr = new T[maxCapacity];
			for (int i = 0; i < dim; i++)
				arr[i] = old[i];
			delete[] old;
		}
	}
	Vector<T>& clone(Vector<T>& v) {
		delete[] arr;
		dim = v.dim;
		maxCapacity = v.capacity();
		arr = new T[maxCapacity];
		for (int i = 0; i < dim; i++)
			arr[i] = v[i];
		return *this;
	}
	Vector<T>& operator=(Vector<T>& v) { return clone(v); }

	int size() { return dim; }
	int capacity() { return maxCapacity; }
	bool empty() { return dim == 0; }
	void clear() { dim = 0; }
	T& at(int id) { return arr[id]; }
	T& operator[] (int id) { return arr[id]; }

	void pop_back() { dim--; }
	void push_back(T val) {
		if (dim == maxCapacity)
			resize(maxCapacity * 2);
		arr[dim++] = val;
	}
	friend ostream& operator << (ostream& os, Vector<T>& v) {
		os << "< ";
		for (int i = 0; i < v.dim; i++)
			os << v[i] << " ";
		os << ">";
		return os;
	}
};

int main(){
	Vector<double> vd(6);
	for (int i = 0; i < vd.size(); i++)
		vd[i] = rand() % 100 * 0.1;
	cout << "Vector<double>    = " << vd << endl;
	vd.pop_back();
	cout << "Vector.pop_back() = " << vd << endl << endl;

	Vector<int> vi;
	for (int i = 0; i < 10; i++)
		vi.push_back(rand() % 10);
	cout << "Vector<int>       = " << vi << endl << endl;

	Vector<string> vs;
	vs.push_back("hello");
	vs.push_back("world");
	vs.push_back("game");
	vs.push_back("over");
	cout << "Vector<string>    = " << vs << endl;

	vs[3] = "I Love";
	vs.push_back("C++");
	cout << "Vector:push_back()= " << vs << endl;

    return 0;
}