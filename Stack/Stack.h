#ifndef STACK_H
#define STACK_H

#include "BasicNode.h"

// Uses a LL 
template <typename T>
class Stack{

private:
	BasicNode<T>* topNode; // Top of the LL
	int size; // Easier to keep track of 

public:
	Stack(); // Constructor

	~Stack(); // Deconstructor	

	bool empty(); // Checks to see if the Stack is empty

	int getSize(); // Returns the size of the Stack

	T top(); // Returns the Top object of the Stack without removing it

	void push(T object); // Inserts a new element

	// void emplace(T object); // Hard to do, do later, copy the information and place in LL as top

	T pop(); // Removes top object

	void printALL(); // Only for debugging
};

template <typename T>
Stack<T>::~Stack(){
	// Pop all not used objects on the stack
	for(int i = 0; i < this->size; i++){
		BasicNode<T>* tempNode = this->topNode;
		this->topNode = this->topNode->getNext();
		delete tempNode;
	}
};

template <typename T>
Stack<T>::Stack(){
	// Init the stack with a NULL top and 0 size
	this->size = 0;
	this->topNode = NULL;
};

template <typename T>
bool Stack<T>::empty(){
	if(this->size == 0){
		return true;
	}
	return false;
};

template <typename T>
int Stack<T>::getSize(){
	return this->size;
};

template <typename T>
T Stack<T>::top(){
	return this->topNode->getInfo();
};

template <typename T>
void Stack<T>::push(T object){
	BasicNode<T>* tempNode = this->topNode;

	this->topNode = new BasicNode<T>;
	this->topNode->setNext(tempNode);
	this->topNode->set(object);

	this->size++;
};

template <typename T>
T Stack<T>::pop(){
		T temp = this->topNode->getInfo();
		BasicNode<T>* tempNode = this->topNode;

		this->topNode = this->topNode->getNext();
	
		delete tempNode;

		this->size--;
		
		return temp;
};

template <typename T>
void Stack<T>::printALL(){
	BasicNode<T>* temp = this->topNode;	
	while(temp->hasNext()){
		std::cout << temp->getInfo() << "\t";
		temp = temp->getNext();
	}
	std::cout << temp->getInfo() << std::endl;
};

#endif
