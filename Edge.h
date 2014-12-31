#ifndef EDGE_H
#define EDGE_H

#include<iostream>
#include "Node.h"

// Constants
#define MAX 10

using namespace std;

class Edge {
	friend istream &operator>>(istream &input, Edge &edge);
	friend ostream &operator<<(ostream &output, Edge &edge);
	private:
		int u, v, c;
		int e;
		int state;
		Node nodes[MAX];
	public:
		Edge();
		Edge(int u, int v, int c);
		~Edge();
		int getU();
		int getV();
		int getC();
		void setEdge(int u, int v, int c);
		void setState(int state);
		void render(Node nodes[]);
};
#endif

