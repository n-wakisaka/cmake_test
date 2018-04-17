#include <cmake_test/Base>
#include <iostream>

using namespace cmake_test;
using namespace std;

int main(int argc, char *argv[]){
	constexpr int N = 10;
	Base b;

	b.resize(N);
	for(int i=0; i<N; i++){
		b[i] = i;
	}

	for(int i=0; i<N; i++){
		cout << b[i] << " ";
	}
	cout << endl;

	return 0;
}

