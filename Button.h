#ifndef BUTTON_H
#define BUTTON_H

class Button {
	private:
		int x;
		int y;
		int color;
		char name[10];
	public:
		Button();
		Button(int x, int y, int color, char name[]);
		//~Button();
		void setButton(int x, int y, int color, char name[]);
		void render(void);
		bool clicked(int x, int y, int x_mouse, int y_mouse);
		void processClick();		
};
#endif

