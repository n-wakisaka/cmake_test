#include "Base.h"

using namespace cmake_test2;

void Base::resize(int n){
	if(n < 0) return;
	vec.resize(n);
}
