#ifndef _HEADER_H
#define _HEADER_H

#include <iostream>


using namespace std;

//define node
struct node{
	string info;
	node * next;
};

//define class
class DemoClass{
private:
	string info;
public:
	DemoClass * next;
	DemoClass(){}
	void print();

};


#endif