#include <cstddef>
#ifndef BASIC_NODE_H
#define BASIC_NODE_H

template <typename T>
class BasicNode{

private:
	BasicNode<T>* next;
	T info;

public:

	BasicNode(){ this->next = NULL; };	

	~BasicNode(){};

	void setNext(BasicNode* next){ this->next = next; };
	
	T getInfo(){ return this->info; };
	
	BasicNode<T>* getNext(){ return this->next; };
	
	void set(T info){ this->info = info; };
	
	bool hasNext(){
		if(this->next != NULL){
			return true;
		}
		return false;
	};	
};

#endif
