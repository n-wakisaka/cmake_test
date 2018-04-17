#include "Base.h"

using namespace cmake_test;

void Base::resize(int n){
	if(n < 0) return;
	vec.resize(n);
}

double  Base::operator[](int n) const {
	return vec[n];
}

double& Base::operator[](int n){
	return vec[n];
}
