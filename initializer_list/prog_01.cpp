#include <iostream>
#include <array>
#include <initializer_list>

// To be able to fix this program and answer these questions, you need to
// have read the documentation at:
//
// https://en.cppreference.com/w/cpp/utility/initializer_list

// Questions:
// 
// 1) When we're using 'auto' in the third block, what is the type of the
// variable 'arr' ?
// 2) Why doesn't the code compile?
// 3) What change needs to be made so that the code will in fact compile,
// and give us the output we're looking for?

int main(void) {

	// Using a native array type.
	{
		const int arr_size = 3;
		int arr[3] = { 1, 2, 3 };

		for ( int i = 0; i < arr_size; i++ ) {
			std::cout << arr[i] << " ";
		}

		std::cout << std::endl;
	}

	// Using the array container type.
	{
		std::array<int, 3> arr = { 4, 5, 6 };

		for ( int i = 0; i < arr.size(); i++ ) {
			std::cout << arr[i] << " ";
		}

		std::cout << std::endl;
	}

	// What happens here?
	{
		auto arr = { 7, 8, 10 };

		for ( int i = 0; i < arr.size(); i++ ) {
			std::cout << arr[i] << " ";
		}

		std::cout << std::endl;
	}

	return 0;
}
