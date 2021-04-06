// 13_VectorOfVector.cpp

#include "Vector.h"
int main(){
	Vector<Vector<int>> image(6);	// Vector<int>의 벡터 객체 image 생성
	int val = 10;
	for (int i = 0; i < image.size(); i++)
		for (int j = 0; j < 12; j++)
			image[i].push_back(++val);

	image[2][5] = image[2][6] = image[3][5] = image[3][6] = 99;
    
	cout << "Image: 12 x 8 " << endl;
	for (int i = 0; i < image.size(); i++)
		cout << "    " << image[i] << endl;

    return 0;
}