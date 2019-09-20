#include<iostream>
#include <stdio.h>
using namespace std;

template <class T1>

class vec3 {
private:
	T1 x, y, z;

public:
	
	void normalize();
	void zero();
	void is_zero();
	void distance_to(vec3);

	vec3() { x = y = z = NULL; };
	vec3(T1 a, T1 c) { x = a; y = NULL; z = c; };
	vec3(T1 a, T1 b, T1 c) { x = a; y = b; z = c; }



};


int main(){
	float a, b, c;
	vec3<int> vector;
	vec3<int> vector2(1, 2);
	vec3<float> vector3(a, b, c);



	return 0;
};

