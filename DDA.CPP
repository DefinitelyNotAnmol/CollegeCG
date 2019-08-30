
#include<iostream.h>
#include<graphics.h>
#include<conio.h>

//Function for finding absolute value
int abs (int n)
{
	return ( (n>0) ? n : ( n * (-1)));
}

void DDA(int X0, int Y0, int X1, int Y1)
{
	int dx = X1 - X0;
	int dy = Y1 - Y0;

	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	float Xinc = dx / (float) steps;
	float Yinc = dy / (float) steps;

	float X = X0;
	float Y = Y0;
	for (int i = 0; i <= steps; i++)
	{
		putpixel (X,Y,CYAN);
		X += Xinc;
		Y += Yinc;
	}
	getch();
}

// Driver program
int main()
{
	int gd = DETECT, gm;
	clrscr();
	// Initialize graphics function
	initgraph (&gd, &gm, "C://TC//BGI");

	int X0, Y0, X1, Y1;

	cout << "Enter first coordinate: ";
	cin >> X0 >> Y0;
	cout << "Enter second coordinate: ";
	cin >> X1 >> Y1;
	DDA(X0+50, Y0+50, X1+50, Y1+50);
	closegraph();
	return 0;
}
