#ifndef _EDGE_CPP_
#define _EDGE_CPP_

#include "Edge.h"
#include<graphics.h>

// Construtors
Edge::Edge() {
	setEdge(0, 0, 0);
}

Edge::Edge(int u, int v, int c) {
	 setEdge(u, v, c);
}

Edge::~Edge() {}

// Public methods
void Edge::setEdge(int u, int v, int c) {
	Edge::u = u;
	Edge::v = v;
	Edge::c = c;
	Edge::state = WHITE;
}

void Edge::setState(int state) {
	Edge::state = state;
}

void Edge::render(Node node[]) {
	int band = 0, x1, x2, y1, y2;
	char legend[10];
	
	for (int index=0; index<MAX; index++) {
		Node currentNode = node[index];
		int currentNumber = currentNode.getNumber();
		
		if (currentNumber == u) {
			x1 = currentNode.getX();
			y1 = currentNode.getY();
			band++;
		}
		
		if (currentNumber == v) {
			x2 = currentNode.getX();
			y2 = currentNode.getY();
			band++;
		}
		
		if (band == 2) {
			break;
		}
	}
	
	setfillstyle(1, 0);
	setcolor(e);
	line(x1, y1, x2, y2);
	sprintf(legend, "%d", c);
	outtextxy((x2+x1)/2, (y2+y1)/2, legend);
}

int Edge::getU() {
	return Edge::u;
}

int Edge::getV() {
	return Edge::v;
}

int Edge::getC() {
	return Edge::c;
}

istream &operator>>(istream &input, Edge &edge) {
	int u, v, c;
	input >> u >> v >> c;
	edge.setEdge(u, v, c);
	return input;
}

ostream &operator<<(ostream &output, Edge &edge) {
	output << edge.getU() << " " << edge.getV() << " " << edge.getC();
	return output;
}
#endif

