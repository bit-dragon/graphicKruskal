#include<graphics.h>
#include<ctime>
#include<iostream>

#include "KruskalScreen.h"
#include "Kruskal.h"

using namespace std;
Kruskalscreen screen(2);
Kruskal kruskal(1);


int main() {
	int touched = 0; // Temporal variable
	
	srand(time(NULL));
	initwindow(800, 600, "Awesome Graph");
	screen.drawAll();
	kruskal.run();
	while(!kbhit()){
		if (ismouseclick(WM_LBUTTONDOWN)) {
			//kruskal.processClick();
		}
		
		if (ismouseclick(WM_RBUTTONDOWN)) {
			if (touched == 1) {
				//kruskal.moveNode(); // Not implemented yet
				// Reset touched flag
			}
		}
	}
	closegraph();
	return (0);
}

