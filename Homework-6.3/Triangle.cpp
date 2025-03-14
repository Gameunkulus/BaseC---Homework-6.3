
#include <iostream>
#include "Triangle.h"
#include <string>

using namespace std;

string Triangle::getSides() {
    
    string text = "�������: a = " + to_string(a) + " b = " + to_string(b) + " c = " + to_string(c) + "\n" +
        "���� : A = " + to_string(A) + " B = " + to_string(B) + " C = " + to_string(C);
    return text;
};

void Triangle::getSidesCount() {
    
    cout << "�����������: " << endl << getSides() << endl;
}

Triangle::Triangle(int a, int b, int c, int A, int B, int C) {

    this->a = 0;
    this->b = 0;
    this->c = 0;
    this->A = 0;
    this->B = 0;
    this->C = 0;

    numSides = 3;
    if (a == 0 || b == 0 || c == 0) {
        cout << "������, ������� ������������ �� ����� ���� ����� ����." << endl;
    }
    else if (A == 0 || B == 0 || C == 0) {
        cout << "������, ���� ������������ �� ����� ���� ����� ����." << endl;
    }
    else if ((a + b) < c || (b + c) < a || (c + a) < b){
        cout << "������, ������������ �������� ������ ������������." << endl;
    }
    else if ((A + B + C) > 180) {
        cout << "������, ����� �������� ����� �� ����� ���� ������ 180." << endl;
    }
    else {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    };
};
