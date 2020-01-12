#include <iostream>
#include "BasicNode.h"
#include "Stack.h"

void printLL(Stack<int> x){
	
};


int main(){

	Stack<int> x;

	// Test: empty()
	std::cout << "Empty: " << x.empty() << std::endl;

	// Test: getSize()
	std::cout << "Size: " << x.getSize() << std::endl;

	// Test: push()
	x.push(0);

	// Test: top()
	// x.printALL();

	// ReTest: getSize()
	std::cout << "Size: " << x.getSize() << std::endl;

	// Push more for fun
	for(int i = 0; i < 100; i++){
		x.push(i+1);
	}

	// PrintALL
	x.printALL();

	// ReTest: getSize()
	std::cout << "Size: " << x.getSize() << std::endl;

	// Test: pop()
	for(int i = 0; i < 101; i++){
		std::cout << x.pop() << "\t";
	}
	std::cout << std::endl;

	return 0;
}
