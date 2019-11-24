#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Node
{
public:
	Node(int val);
	int value;
	Node* next;
};


class Graph
{
public:

	Graph();
	Graph(int numVertex);
	bool addEdge(int vertex, int edge);
	bool removeEdge(int vertex, int edge);
	bool hasEdge(int vertex, int edge);
	string outEdge(int vertex);
	string inEdge(int vertex);
	~Graph();

private:
	vector<Node*> vertices;
};