#include<graphics.h>
#include "Button.h"

// Constructors
Button::Button() {
	Button::x = 0;
	Button::y = 0;
	Button::color = 0;
}

Button::Button(int x, int y, int color, char name[]) {
	Button::x = x;
	Button::y = y;
	Button::color = color;
	for (int index = 0; index <= 10; index++) {
		Button::name[index] = name[index];
	}
}

// Public methods
void Button::render() {
	int xi = x;
	int yi = y;
	int xf = xi + 100;
	int yf = yi + 50;
	
	setbkcolor(WHITE);
	setfillstyle(1, Button::color);
	bar(xi, yi, xf, yf);
	setcolor(7);
	line(xi, yi, xi, yf);
	line(xi, yi, xf, yi);
	setcolor(8);
	line(xi, yf, xf, yf);
	line(xf, yi, xf, yf);
	outtextxy(xi+25, yi+16, name);
	setbkcolor(BLACK);
}

bool Button::clicked(int x, int y, int x_mouse, int y_mouse) {
	int xi = x;
	int yi = y;
	int xf = xi + 100;
	int yf = yi + 50;
	
	return ((xi <= x_mouse && xf >= x_mouse) && (yi <= y_mouse && yf >= y_mouse));	
}

void Button::processClick() {
	int pressX = 0, pressY = 0;
	
	getmouseclick(WM_LBUTTONDOWN, pressX, pressY);
	if (clicked(x, y, pressX, pressY)) {
		exit(0);
	}
}

