// Homework-6.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "RectTriangle.h"
#include "IsoTriangle.h"
#include "EquiTriangle.h"
#include "Fourangle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Parallelogram.h"
#include "Rhombus.h"
using namespace std;


int main()
{
    setlocale(LC_CTYPE, "rus");

    Figure figure;
    figure.getSidesCount();
    Triangle triangle(10, 10, 10, 60, 60, 60);
    triangle.getSidesCount();
    RectTriangle rectTriangle(10, 25, 15, 25, 65);
    rectTriangle.getSidesCount();
    IsoTriangle IsoTriangle(15, 10, 60, 20);
    IsoTriangle.getSidesCount();
    EquiTriangle EquiTriangle(15);
    EquiTriangle.getSidesCount();
    Fourangle fourangle(10, 10, 10, 10, 90, 90, 90,90);
    fourangle.getSidesCount();
    Square square(10);
    square.getSidesCount();
    Rectangle rectangle(15,20);
    rectangle.getSidesCount();
    Parallelogram parallelogram(10, 15, 30, 50);
    parallelogram.getSidesCount();
    Rhombus rhombus(15, 20, 30);
    rhombus.getSidesCount();

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
