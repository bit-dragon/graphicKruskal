#ifndef _KRUSKALSCREEN_CPP_
#define _KRUSKALSCREEN_CPP_

#include "KruskalScreen.h"
#include "Button.h"
#include<graphics.h>
#include<iostream>

#define LEFT_POS 50
#define RIGHT_POS 33

using namespace std;

// Constructor
Kruskalscreen::Kruskalscreen() {
}

Kruskalscreen::Kruskalscreen(int something) {
	cout << "Initializing the screen...";
}

Kruskalscreen::~Kruskalscreen() {}

// Private methods
void Kruskalscreen::drawLegends() {
	setfillstyle(1, 8);
	bar(0, 480, 795, 595);
	setbkcolor(8);
	outtextxy(LEFT_POS, 481, (char *)"\"ARISTAS\"");
	outtextxy(LEFT_POS, 500, (char *)" - Sin analizar");
	outtextxy(LEFT_POS, 520, (char *)" - Analizado");
	outtextxy(LEFT_POS, 540, (char *)" - Aceptado");
	outtextxy(LEFT_POS, 560, (char *)" - Rechazado");
}

void Kruskalscreen::drawLabels() {
	drawLabel(WHITE, 503, 513);
	drawLabel(YELLOW, 523, 533);
	drawLabel(GREEN, 542, 553);
	drawLabel(RED, 563, 573);
}

void Kruskalscreen::drawLabel(int color, int top, int bottom) {
	setfillstyle(1, color);
	bar(LEFT_POS, top, RIGHT_POS, bottom);
}

void Kruskalscreen::drawInstructions() {
	// Not implemented yet
}

// Public methods
void Kruskalscreen::drawAll() {
	Button startButton(680, 510, 15, (char *)"Kruskal");
	
	drawLegends();
	drawLabels();
	
	startButton.render();
}
#endif

