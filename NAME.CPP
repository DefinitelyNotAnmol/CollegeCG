#include <iostream.h>
#include <graphics.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int A(int x, int y) {
    line(x, y+30, x+15, y);
    line(x+15, y, x+30, y+30);
    line((x + x + 15)/2, (y + y + 30)/2, (x + 15 + x + 30)/2, (y + y + 30)/2);
    
    return x+30;
}

int B(int x, int y) {
    y++;
    line(x, y, x, y+28);
    line(x, y, x+15, y);
    line(x, y+28, x+15, y+28);
    line(x, y+14, x+15, y+14);
    arc(x+15, (y + y + 14)/2, 270, 90, 7);
    arc(x+15, (y+14 + y+28)/2, 270, 90, 7);
    
    return x+22;
}

int C(int x, int y) {
    line(x, y+10, x, y+20);
    arc(x+10, y+10, 15, 180, 10);
    arc(x+10, y+20, 180, 345, 10);
    
    return x+20;
}

int D(int x, int y) {
    line(x, y, x, y+30);
    line(x, y, x+7, y);
    line(x, y+30, x+7, y+30);
    arc(x+7, y+15, 270, 90, 15);
    
    return x+22;
}

int E(int x, int y) {
    line(x, y, x, y+30);
    line(x, y, x+20, y);
    line(x, y+15, x+15, y+15);
    line(x, y+30, x+20, y+30);
    
    return x+20;
}

int F(int x, int y) {
    line(x, y, x, y+30);
    line(x, y, x+20, y);
    line(x, y+15, x+15, y+15);
    
    return x+20;
}

int G(int x, int y) {
    line(x, y+10, x, y+20);
    arc(x+10, y+10, 5, 180, 10);
    arc(x+10, y+20, 180, 0, 10);
    line(x+20, y+20, x+20, y+15);
    line(x+20, y+15, x+10, y+15);
    
    return x+20;
}

int H(int x, int y) {
    line(x, y, x, y+30);
    line(x, y+15, x+20, y+15);
    line(x+20, y, x+20, y+30);
    
    return x+20;
}

int I(int x, int y) {
    line(x, y, x+15, y);
    line(x+8, y, x+8, y+30);
    line(x, y+30, x+15, y+30);
    
    return x+15;
}

int J(int x, int y) {
    line(x+5, y, x+20, y);
    line(x+20, y, x+20, y+20);
    arc(x+10, y+20, 180, 0, 10);
    
    return x+20;
}

int K(int x, int y) {
    line(x, y, x, y+30);
    line(x, y+15, x+20, y);
    line(x, y+15, x+20, y+30);
    
    return x+20;
}

int L(int x, int y) {
    line(x, y, x, y+30);
    line(x, y+30, x+20, y+30);
    
    return x+20;
}

int M(int x, int y) {
    line(x, y+30, x, y);
    line(x, y, (x+15), (y+15));
    line(x+30, y, (x+15), (y+15));
    line(x+30, y+30, x+30, y);
    
    return x+30;
}

int N(int x, int y) {
    line(x, y+30, x, y);
    line(x, y, x+25, y+30);
    line(x+25, y+30, x+25, y);
    
    return x+25;
}

int O(int x, int y) {
    ellipse(x+13, y+15, 0, 360, 13, 15);
    
    return x+26;
}

int P(int x, int y) {
    line(x, y, x, y+30);
    line(x, y, x+15, y);
    line(x, y+18, x+15, y+18);
    arc(x+15, y+9, 270, 90, 9);
    
    return x+23;
}

int Q(int x, int y) {
    ellipse(x+13, y+15, 0, 360, 13, 15);
    line(x+18, y+20, x+26, y+30);
    
    return x+26;
}

int R(int x, int y) {
    line(x, y, x, y+30);
    line(x, y, x+15, y);
    line(x, y+18, x+15, y+18);
    arc(x+15, y+9, 270, 90, 9);
    line(x+10, y+18, x+20, y+30);
    
    return x+23;
}

int S(int x, int y) {
    line(x+5, y, x+20, y);
    line(x+5, y+14, x+15, y+14);
    line(x, y+28, x+15, y+28);
    arc(x+5, y+7, 90, 270, 7);
    arc(x+15, y+21, 270, 90, 7);
    
    return x+22;
}

int T(int x, int y) {
    line(x, y, x+20, y);
    line(x+10, y, x+10, y+30);
    
    return x+20;
}

int U(int x, int y) {
    line(x, y, x, y+20);
    line(x+20, y, x+20, y+20);
    arc(x+10, y+20, 180, 0, 10);
    
    return x+20;
}

int V(int x, int y) {
    line(x, y, x+15, y+30);
    line(x+15, y+30, x+30, y);
    
    return x+30;
}

int W(int x, int y) {
    line(x, y, x+7, y+30);
    line(x+7, y+30, x+15, y+15);
    line(x+15, y+15, x+23, y+30);
    line(x+23, y+30, x+30, y);
    return x+30;
}

int X(int x, int y) {
    line(x, y, x+25, y+30);
    line(x, y+30, x+25, y);
    
    return x+25;
}

int Y(int x, int y) {
    line(x, y, x+10, y+15);
    line(x+20, y, x+10, y+15);
    line(x+10, y+15, x+10, y+30);
    
    return x+20;
}

int Z(int x, int y) {
    line(x, y, x+25, y);
    line(x+25, y, x, y+30);
    line(x, y+30, x+25, y+30);
    
    return x+25;
}

int notDefined(int x, int y) {
    line(x, y, x+25, y);
    line(x, y, x, y+30);
    line(x, y+30, x+25, y+30);
    line(x+25, y, x+25, y+30);
    line(x, y, x+25, y+30);
    line(x, y+30, x+25, y);
    
    return x+25;
}


void printName(const char *name, int startX, int startY) {
	//A 30X30
//    line(10, 40, 25, 10);
//    line(25, 10, 40, 40);
//    line(35/2, 25, 65/2, 25);
//
//    //N
//    line(45, 40, 45, 10);
//    line(45, 10, 70, 40);
//    line(70, 40, 70, 10);
//
//    //M
//    line(75, 40, 75, 10);
//    line(75, 10, 90, 25);
//    line(105, 10, 90, 25);
//    line(105, 40, 105, 10);
//
//    //O
//    ellipse(123, 25, 0, 360, 13, 15);
//
//    //L
//    line(140, 10, 140, 40);
//    line(140, 40, 160, 40);
    
    int x = startX, y = startY, end;
    for (int i = 0; name[i] != '\0'; i++) {
        switch (toupper(name[i])) {
            case 'A':
                end = A(x, y);
                break;
            case 'B':
                end = B(x, y);
                break;
            case 'C':
                end = C(x, y);
                break;
            case 'D':
                end = D(x, y);
                break;
            case 'E':
                end = E(x, y);
                break;
            case 'F':
                end = F(x, y);
                break;
            case 'G':
                end = G(x, y);
                break;
            case 'H':
                end = H(x, y);
                break;
            case 'I':
                end = I(x, y);
                break;
            case 'J':
                end = J(x, y);
                break;
            case 'K':
                end = K(x, y);
                break;
            case 'L':
                end = L(x, y);
                break;
            case 'M':
                end = M(x, y);
                break;
            case 'N':
                end = N(x, y);
                break;
            case 'O':
                end = O(x, y);
                break;
            case 'P':
                end = P(x, y);
                break;
            case 'Q':
                end = Q(x, y);
                break;
            case 'R':
                end = R(x, y);
                break;
            case 'S':
                end = S(x, y);
                break;
            case 'T':
                end = T(x, y);
                break;
            case 'U':
                end = U(x, y);
                break;
            case 'V':
                end = V(x, y);
                break;
            case 'W':
                end = W(x, y);
                break;
            case 'X':
                end = X(x, y);
                break;
            case 'Y':
                end = Y(x, y);
                break;
            case 'Z':
                end = Z(x, y);
                break;

            default:
                end = notDefined(x, y);
                break;
        }
        
        x = end + 5;
    }
}

int main() {
	int gd = DETECT, gm;
	clrscr();

	initgraph (&gd, &gm, "C://TC//BGI");

    char name[26];
    cout << "Enter your name: ";
    cin >> name;
	printName(name, 10, 30);

	getch();
	closegraph();
	return 0;
}
