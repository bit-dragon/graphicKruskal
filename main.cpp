#include<graphics.h>
#include<ctime>

#include "KruskalScreen.h"

using namespace std;
Kruskalscreen screen(2);


int main() {
	srand(time(NULL));
	initwindow(800, 600, "Awesome Graph");
	screen.drawAll();
	while(!kbhit()){
		// Something is going to be here!
	}
	closegraph();
	return (0);
}

