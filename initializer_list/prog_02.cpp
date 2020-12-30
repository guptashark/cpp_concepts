#include <iostream>
#include <array>

#include <initializer_list>

using namespace std;

// To be able to fix this program and answer these questions, you need to
// have read the documentation at:
//
// https://en.cppreference.com/w/cpp/utility/initializer_list

// Questions:
// 
// 1) What is the type of the range exprssion in the third block?
// 1) Why doesn't the code compile?
// 2) What change needs to be made so that the code will in fact compile,
// and give us the output we're looking for?

int main(void) {

	// Using a native array type.
	{
		int arr[3] = { 2, 4, 6 };

		for ( int & i : arr ) {
			i /= 2;
			cout << i << " ";
		}

		cout << endl;
	}

	// Using the array container type.
	{
		array<int, 3> arr = { 8, 10, 12 };

		for ( int & i : arr ) {
			i /= 2;
			cout << i << " ";
		}

		cout << endl;
	}

	// What happens here?
	{
		for ( int & i : { 14, 16, 18 } ) {
			i /= 2;
			cout << i << " ";
		}

		cout << endl;
	}

	return 0;
}
