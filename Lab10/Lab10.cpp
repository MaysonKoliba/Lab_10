#include "..\\Lab10\Graph.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{

	string inputLine = "";
	string output = "";
	int input = 0;
	int vertex;
	int edge;

	Graph userGraph;

	while (input != 7) {
		cout << "Press 1 to add an edge to graph" << endl;
		cout << "Press 2 remove an edge from graph" << endl;
		cout << "Press 3 Find an edge in the graph" << endl;
		cout << "Press 4 Find the out edges of a vertices" << endl;
		cout << "Press 5 Find the in edges of a vertices" << endl;
		cout << "Press 6 To Print out Adjacency Matrix" << endl;
		cout << "Press 7 to quit" << endl;

		getline(cin, inputLine);
		input = stoi(inputLine);

		switch (input)
		{
		case 1:
			cout << "Enter the vertex you would like to add an edge to" << endl;
			cin >> vertex;
			cout << "Enter the edge you would like to add to this vertex" << endl;
			cin >> edge;

			if (userGraph.addEdge(vertex, edge)) {
				cout << "Edge added!" << endl << endl;
			}
			else {
				cout << "You can't add that edge!" << endl << endl;
			}
			cin.ignore();
			break;

		case 2:
			cout << "Enter the vertex you would like to remove an edge from" << endl;
			cin >> vertex;
			cout << "Enter the edge you would like to remove" << endl;
			cin >> edge;

			if (userGraph.removeEdge(vertex, edge)) {
				cout << "Edge removed!" << endl << endl;
			}
			else {
				cout << "You can't remove that edge" << endl << endl;
			}
			cin.ignore();
			break;

		case 3:
			cout << "Enter the vertex you would like to find an edge in" << endl;
			cin >> vertex;
			cout << "Enter the edge you would like to find" << endl;
			cin >> edge;

			if (userGraph.hasEdge(vertex, edge)) {
				cout << "Edge found!" << endl << endl;
			}
			else {
				cout << "Edge not found!" << endl << endl;
			}
			cin.ignore();
			break;

		case 4:
			cout << "Enter the vertex you would like to find the out edges for" << endl;
			cin >> vertex;

			output = userGraph.outEdge(vertex);
			cout << "Here are the out edges" << endl;
			cout << output << endl << endl;
			cin.ignore();
			break;

		case 5:
			cout << "Enter the vertex you would like to find the in edges for" << endl;
			cin >> vertex;

			output = userGraph.inEdge(vertex);
			cout << "Here are the in edges" << endl;
			cout << output << endl << endl;
			cin.ignore();
			break;

		case 6:
			cout << "Printing the adjacency matrix!" << endl;
			userGraph.printMatrix();
			cout << endl << endl;
			break;

		case 7:
			cout << "Quiting..." << endl;
			break;
		}
	}


	return 0;
}

