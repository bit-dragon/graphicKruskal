#include "Kruskal.h"
#define MAX_NODES 100

#include<iostream>
#include<vector>

#include "Node.h"
#include "Edge.h"

using namespace std;

int n, m;
Node nodes[MAX_NODES+1];
Edge edges[MAX_NODES+1];
vector<Edge>edgesVector;

// Constructors
Kruskal::Kruskal() {
	cout << "Initializing the kruskal algorithm";
}

Kruskal::Kruskal(int duh) {
	cout << "Initilizing the kruskal algorith";
}

Kruskal::~Kruskal() {}

// Private methods
void Kruskal::initializeEdges() {
	
}

void Kruskal::readFile() {
	cin >> n >> m;
	
	for (int index = 1; index <= n; index++) {
		cin >> nodes[index];
	}
	
	for (int index = 1; index <= m; index++) {
		Edge currentEdge = edges[index];
		currentEdge.setState(1);
		cin >> currentEdge;
		edgesVector.push_back(currentEdge);
	}
}

// Public methods
void Kruskal::run() {
	// run run
}
