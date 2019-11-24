#include "..\\Lab10\Graph.h"

Node::Node(int val)
{
	value = val;
	next = nullptr;
}

Graph::Graph()
{
	for (int i = 0; i < 10; i++) {

		Node* node = new Node(i);
		vertices.push_back(node);
	}
}

Graph::Graph(int numVertex)
{
	for (int i = 0; i < numVertex; i++) {

		Node* node = new Node(i);
		vertices.push_back(node);
	}
}

Graph::~Graph()
{
	for (int i = 0; i < vertices.size(); i++) {
		delete vertices[i];
	}
}

bool Graph::addEdge(int vertex, int edge)
{
	if ((edge > vertices.size() - 1) || (edge < 0)) {
		return false;
	}
	else if ((vertex > vertices.size() - 1) || (vertex < 0)) {
		return false;
	}

	if (vertices[vertex]->next == nullptr) {
		Node* newEdge = new Node(edge);
		vertices[vertex]->next = newEdge;
		return true;
	}

	Node* newEdge = new Node(edge);
	Node* temp = vertices[vertex]->next;

	while(temp != nullptr) {

		if (temp->next == nullptr) {
			temp->next = newEdge;
			return true;
		}

		temp = temp->next;
	}
}

bool Graph::removeEdge(int vertex, int edge)
{
	if ((edge > vertices.size() - 1) || (edge < 0)) {
		return false;
	}
	else if ((vertex > vertices.size() - 1) || (vertex < 0)) {
		return false;
	}
	else if (vertices[vertex]->next == nullptr) {
		return false;
	}

	Node* start = vertices[vertex];
	Node* removeEdge = start->next;


	while (removeEdge->value != edge) {
		start = removeEdge;
		removeEdge = removeEdge->next;
	}

	start->next = removeEdge->next;
	delete removeEdge;


	return true;
}

bool Graph::hasEdge(int vertex, int edge)
{
	if ((edge > vertices.size() - 1) || (edge < 0)) {
		return false;
	}
	else if ((vertex > vertices.size() - 1) || (vertex < 0)) {
		return false;
	}
	else if (vertices[vertex]->next == nullptr) {
		return false;
	}

	Node* targetNode = vertices[vertex]->next;

	while (targetNode->value != edge) {
		targetNode = targetNode->next;

		if (targetNode == nullptr) {
			return false;
		}
	}

	if (targetNode->value == edge) {
		return true;
	}
}

string Graph::outEdge(int vertex)
{
	if ((vertex > vertices.size() - 1) || (vertex < 0)) {
		return false;
	}
	else if (vertices[vertex]->next == nullptr) {
		return "";
	}
	
	string output = "";

	Node* targetNode = vertices[vertex]->next;

	while (targetNode != nullptr) {
		
		output = output + to_string(targetNode->value);

		targetNode = targetNode->next;
	}

	return output;
}

string Graph::inEdge(int vertex)
{
	string output = "";
	return output;
}