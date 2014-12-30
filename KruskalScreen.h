#ifndef KRUSKALSCREEN_H
#define KRUSKALSCREEN_H

class Kruskalscreen {
	private:
		void drawLabels(void);
		void drawLabel(int color, int firstPosition, int secondPosition);
		void drawLegends(void);
		void drawSquareColors(void);
		void drawInstructions(void);
	public:
		Kruskalscreen();
		Kruskalscreen(int duh);
		~Kruskalscreen();
		void drawAll(void);
};

#endif
