#include <iostream>
#include <windows.h>

int main() {
	POINT op;
	HWND hWnd = GetConsoleWindow();
	HDC hDC = GetDC(hWnd);
	SelectObject(hDC, GetStockObject(WHITE_PEN));

	MoveToEx(hDC, 50, 50, &op);
	LineTo(hDC, 600, 6000);

	ReleaseDC(hWnd, hDC);
	std::cin.get();
	return 0;
}
