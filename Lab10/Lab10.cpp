// Lab10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "..\\Lab10\Graph.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

	Graph test;

	bool number1 = test.addEdge(0,2);
	bool number2 = test.addEdge(3, 7);
	bool number3 = test.addEdge(3, 9);
	bool number4 = test.addEdge(3, 4);
	bool number11 = test.addEdge(-3, 9);
	bool number12 = test.addEdge(13, 4);

	bool number5 = test.addEdge(5, 15);
	bool number6 = test.addEdge(7, -8);

	bool number7 = test.removeEdge(3, 9);

	bool number8 = test.hasEdge(0, 1);
	bool number9 = test.hasEdge(3, 7);
	bool number10 = test.hasEdge(3, 9);
   
	string output1 = test.outEdge(3);
	cout << output1 << endl;

	string output2 = test.outEdge(0);
	cout << output2 << endl;

	return 0;
}

