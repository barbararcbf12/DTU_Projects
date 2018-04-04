#include "vector2d.h"
#include <cmath>

v2d::v2d(double a, double b){
    // put something here
    this-> x = a;
    this-> y = b;
}

v2d::v2d(const v2d & v){
    // put something here
    this-> x = v.x;
    this-> y = v.y;
}

v2d::~v2d(){
    // put something here
}

v2d & v2d::operator=(const v2d &v){
    // put something here
    x = v.x;
    y = v.y;
    
    return *this;
}

v2d & v2d::operator+(const v2d &v){
    // put something here
    x = x + v.x;
    y = y + v.y;
    
    return *this;
}

double v2d::operator*(const v2d &v){
    // put something here
    double product;
    product = x * v.x + y * v.y;
    return product;
}

v2d & v2d::operator*(double k){
    // put something here
    x = x * k;
    y = y * k;
    
    return *this;
}

double v2d::length(){
    // put something here
    double len;
    len = sqrt((x * x) + (y * y));
    return len;
}

