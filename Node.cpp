#ifndef _NODE_CPP_
#define _NODE_CPP_

#include<iostream>
#include "Node.h"

using namespace std;

// Constructors
Node::Node() {
	setNode(0, -1, -1);
}

Node::Node(int number, int x, int y) {
	setNode(number, x, y);
}

Node::~Node() {}

// Public methods
void Node::setNode(int number, int x, int y) {
	Node::number = number;
	Node::x = x;
	Node::y = y;
}

void Node::setX(int x) {
	Node::x = x;
}

int Node::getX() {
	return Node::x;
}

void Node::setY(int y) {
	Node::y = y;
}

int Node::getY() {
	return Node::y;
}

int Node::getNumber() {
	return Node::number;
}

istream &operator>>(istream &input, Node &node) {
	int number, x, y;
	input >> number >> x >> y;
	node.setNode(number, x, y);
	return input;
}
#endif
