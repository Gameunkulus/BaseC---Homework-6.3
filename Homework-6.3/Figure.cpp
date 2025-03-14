
#include <iostream>
#include <string>
#include "Figure.h"
using namespace std;

    Figure::Figure(){ this->numSides = 0; }

    string Figure::getSides(){ return to_string(numSides);}

    void Figure::getSidesCount(){ cout << "Фигура" << endl << "Количество сторон: " << getSides() << endl; }