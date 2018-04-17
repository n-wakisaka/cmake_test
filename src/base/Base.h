#ifndef __CMAKE_TEST_BASE_H__
#define __CMAKE_TEST_BASE_H__

#include <vector>

namespace cmake_test {

	class Base {
	public:
		void resize(int n);

		double  operator[](int n) const;
		double& operator[](int n);

	private:
		std::vector<double> vec;
	};

}

#endif // __CMAKE_TEST_BASE_H__
