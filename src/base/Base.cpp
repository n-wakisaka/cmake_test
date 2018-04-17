#include "Base.h"

using namespace cmake_test;

void Base::resize(int n){
	if(n < 0) return;
	vec.resize(n);
}

auto Base::begin(){
	return vec.begin();
}

auto Base::begin() const {
	return vec.cbegin();
}

auto Base::end(){
	return vec.end();
}

auto Base::end() const {
	return vec.cend();
}
