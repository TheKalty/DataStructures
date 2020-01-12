#include <iostream>
#include "Array.h"

template <typename T>
void printAll(T &x);

int main(){
    
	// Check template
    Array<int> a; // Should be ints
	std::cout << "Size of a: " << a.memorySize() << std::endl;
    Array<double> b(100); // Should be doubles
	std::cout << "Size of b: " << b.memorySize() << std::endl;

	// Check size()
	std::cout << "Num of Elements of a: " << a.size() << std::endl;
	std::cout << "Num of Elements of b: " << b.size() << std::endl;

	// Check set() which is also get()
	std::cout << "Run 1: " << std::endl;
	printAll(a);
	a.set(3, 6);
	std::cout << std::endl;

	std::cout << "Run 2: " << std::endl;
	printAll(a);
	std::cout << std::endl;

	// Check swap();
	a.swap(3, 2);
	printAll(a);



    return 0;
}

template <typename T>
void printAll(T &x){
	int size = x.size();
	for(int i = 0; i < size; i++){
		std::cout << i << ": " << x.at(i) << std::endl;
	}
};
