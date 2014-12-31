#ifndef KRUSKAL_H
#define KRUSKAL_H

class Kruskal {
	private:
		void initializeGraph(void);
		void initializeEdges(void);
	public:
		Kruskal();
		Kruskal(int duh);
		~Kruskal();
		void readFile(void);
		void reRender(void); // Re render the graph with a delay
		void run(void);
		void move(void);
};

#endif
