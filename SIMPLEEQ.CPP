#include <iostream.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>

void lineUsingSimpleEquation(int X0, int Y0, int X1, int Y1);
int round(float num);

int main() {
	int gd = DETECT, gm;
	clrscr();
	initgraph (&gd, &gm, "C://TC//BGI");

	int X0, Y0, X1, Y1;

	cout << "Enter first coordinate: ";
	cin >> X0 >> Y0;
	cout << "Enter second coordinate: ";
	cin >> X1 >> Y1;
	lineUsingSimpleEquation(X0, Y0+50, X1, Y1+50);
	closegraph();
	return 0;
}

void lineUsingSimpleEquation(int X0, int Y0, int X1, int Y1) {
    int dx = X1 - X0;
	int dy = Y1 - Y0;

    float M = (Y1 - Y0)/(float)(X1 - X0);
    float bY = Y0 - M * X0;

    if (abs(dx) > abs(dy)) {
        int X = X0;
        for (int i = 0; i <= abs(dx); i++, X++) {
            putpixel(X, round(M * X + bY), CYAN);
        }
    }

    else {
        int Y = Y0;
        int init = round(Y/M);
        for (int i = 0; i <= abs(dy); i++, Y++) {
            putpixel(round(Y/M) - init + X0, Y, CYAN);
        }
    }

    getch();
}

int round(float num) {
    return (int)(num + 0.5);
}