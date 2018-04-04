//PROTOTYPES
//  shapes.h

#include <cmath>

//Shape functions
class Shape{
public:
    double a;
    double b;
    
    Shape();
    Shape(double a){
        this -> a = a;
    };
    Shape(double a,double b){
        this -> a = a;
        this -> b = b;
    };
    virtual double area(){};
    virtual double perimeter(){};
    virtual double height(){};
    virtual double width(){};
    virtual void rotate(){
        double temp;
        temp = a;
        a = b;
        b = temp;
    };
    
};

//Rectangle functions
class Rectangle : public Shape{
public:
    Rectangle (double a,double b) : Shape(a,b){
        this -> a = a;
        this -> b = b;
    };
    double area(){  return a * b; }
    double perimeter(){ return 2 * a + 2 * b;   }
    double height(){ return a; }
    double width(){ return b; }
};


//Square functions
class Square : public Shape{
public:
    Square (double a) : Shape(a){
        this -> a = a;
    };
    double area(){ return pow(a , 2); }
    double perimeter(){ return 4 * a; }
    double height(){ return a; }
    double width(){ return a; }
};


//Circle functions
class Circle : public Shape{
public:
    Circle (double a) : Shape(a){
        this -> a = a;
    };
    double area(){ return 3.14 * pow( a , 2 ); }
    double perimeter(){ return 2 * 3.14 * a; }
    
    double height(){ return 2 * a; }
    double width(){ return 2 * a; }
};
