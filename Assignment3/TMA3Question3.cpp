//: TMA3Question3.cpp

/* 
 Title: TMA3Question3.cpp
 Description: Program produces a class heirarchy for simple geometric shapes
 Date: May 29, 2016
 Author: Remi Coussement
*/

/*
 DOCUMENTATION
 
 Program Purpose:
 	To produce a class heirarchy for simple two dimensional shapes going from points to a generic shape
 	class then to more specialized individual shape objects, in particular Circle, Square, and Triangle
 	and output properties of these shapes

 Compile (assuming mingw compiler and opened command prompt): g++ -w -o TMA3Question3 TMA3Question3.cpp
 Execution (in a Command Prompt window): TMA3Question3.exe
 
 Classes: 	Point
			Shape
			Circle : Shape
			Square : Shape
			Triangle : Shape

 Variables:
 	c(Circle) = a circle object with a radius of 23, must contain point (0,0)
 	s(Square) = a square object with sides of length 25, must contain point (0,0)
 	t(Triangle) = a triangle object with sides of length 10, 20, 30, must contain point (0,0)
*/

/*
 TEST PLAN
 
 Normal case:
 	>Displaying Circle c:
 	>Area = 1661.90 units^2
 	>Circumference = 144.51 units
 	>Bounding Box:
 	>P1: (-23, -23)
 	>P2: (-23, 23)
 	>P3: (23, 23)
 	>P3: (23, -23)
 	>
 	>Displaying Square s:
 	>Area = 625 units^2
 	>Circumference = 100 units
 	>Bounding Box:
 	>P1(-10, -5)
 	>P2(-10, 20)
 	>P3(15, 20)
 	>P4(15, -5)
 	>
 	>Displaying Triangle t:
 	>Area = 0 units^2
 	>Circumference = 60 units
 	>Bounding Box:
 	>P1(0,-10)
 	>P2(0,20)
 	>P3(0-10)
 	>P4(0,20)
 
 Discussion:
 	Derived classes Circle, Square, and Triangle are composed of base class Point and publicly inherit 
 	from base class Shape. The derived classes override the virtual functions to calculate area, circumference,
 	and the bounding box from Shape, and utilize a default display function in Shape to print the area, circumference,
 	and points which make up the bounding box for each shape. This allows the derived classes to use the appropriate 
 	algorithms to determine these values for the geometry given, and to be able to display them using a common function
 	and format.
 	Inside main objects of the derived class types are declared using either a Point object based constructor or one which
 	takes x and y values, then the display function is called for each of these functions to display to the console the
 	relevant properties for shapes defined by the points given
 
*/
#include <iostream>
#include <cmath>
using namespace std;

class Point{
	double x, y;
public:
	Point(double xx = 0, double yy = 0): x(xx), y(yy){}
	// >> is shown in the assignment document so >> was overloaded as opposed
	// to the typical << for ostream overloading
	friend ostream& operator>>(ostream& os, const Point& p){
		return os << "Point: (" << p.x << ", " << p.y << ")	";
	}
	friend Point operator+(const Point&, const Point&);
	friend Point operator-(const Point&, const Point&);
	friend double distance(const Point d);
	friend class Triangle;
};

Point operator+(const Point& p1, const Point& p2){
	return Point(p1.x + p2.x, p1.y + p2.y);
}
Point operator-(const Point& p1, const Point& p2){
	return Point(p1.x - p2.x, p1.y - p2.y);
}
double distance(const Point d){
	return sqrt(pow(d.x, 2) + pow(d.y, 2));
}

class Shape{
	virtual double calcArea(){}
	virtual double calcCircumference(){}
	virtual void boundingBox(){}
public:
	void display(){
		cout << "Area = " << calcArea() << " units^2\n"
			<< "Circumference = " << calcCircumference() << " units\n";
		boundingBox();
		cout << endl;
	}
};

class Circle: public Shape{
	Point center, p;
	double calcArea(){
		return M_PI * pow(distance(p - center), 2);
	}
	double calcCircumference(){
		return M_PI * 2 * distance(p - center);
	}
	void boundingBox(){
		double r = distance(p - center);
		cout << "Bounding box:\nP1: " >> Point(center-(Point(r,r)))
			<< "\nP2: " >> Point(center-(Point(r,-r)))
			<< "\nP3: " >> Point(center-(Point(-r,-r)))
			<< "\nP4: " >> Point(center-(Point(-r,r))) << endl;
	}
public:
	Circle(const Point p1, const Point p2): center(p1), p(p2){}
	Circle(const double x1 = 0, const double y1 = 0, const double x2 = 1.0, const double y2 = 0){
		center = Point(x1,y1);
		p = Point(x2,y2);
	}
};

class Square: public Shape{
	Point p[4];
	double calcArea(){
		double d1 = distance(p[1]-p[0]);
		double d2 = distance(p[2]-p[0]);
		if(d1 <= d2)
			return (d1 * d1);
		else
			return (d2 * d2);
	}
	double calcCircumference(){
		double d1 = distance(p[1]-p[0]);
		double d2 = distance(p[2]-p[0]);
		if(d1 <= d2)
			return (4 * d1);
		else
			return (4 * d2);
	}
	void boundingBox(){
		cout << "Bounding box:\nP1: " >> p[0] << "\nP2: " >> p[1]
			<< "\nP3: " >> p[2] << "\nP4: " >> p[3] << endl;
	}
public:
	Square(const Point p1, const Point p2, const Point p3, const Point p4): p{p1,p2,p3,p4}{}
	Square(double x1 = 0, double y1 = 0, double x2 = 0, double y2 = 1, double x3 = 1, double y3 = 1, double x4 = 1, double y4 = 0){
		p[0] = Point(x1,y1);
		p[1] = Point(x2,y2);
		p[2] = Point(x3,y3);
		p[3] = Point(x4,y4);
	}
};

class Triangle: public Shape{
	Point p[3];
	double calcArea(){
		return ((p[0].x * (p[1].y - p[2].y) + p[1].x * (p[2].y - p[0].y) + p[2].x * (p[0].y - p[1].y))/2);
	}
	double calcCircumference(){
		return (distance(p[0]-p[1]) + distance(p[1] - p[2]) + distance(p[2] - p[0]));
	}
	void boundingBox(){
		Point bb[4];
		double d1 = distance(p[0] - p[1]);
		double d2 = distance(p[2] - p[1]);
		double d3 = distance(p[2] - p[0]);

		if(d1 >= d2 && d1 >= d3){
			double dn = abs((p[0].y - p[1].y) * p[2].x - (p[0].x - p[1].x) * p[2].y + p[0].x * p[1].y - p[0].y * p[1].x)
							/ sqrt(pow((p[0].y - p[1].y),2) + pow((p[0].x - p[1].x),2));
			Point normal((p[0] - p[1]).y * dn/d1, (p[0] - p[1]).x * dn/d1);

			bb[0] = p[0]; bb[1] = p[1];
			bb[2] = p[0] + normal;
			bb[3] = p[1] + normal;
		}
		else if(d2 >= d3){
			double dn = abs((p[2].y - p[1].y) * p[0].x - (p[2].x - p[1].x) * p[0].y + p[2].x * p[1].y - p[2].y * p[1].x)
							/ sqrt(pow((p[2].y - p[1].y),2) + pow((p[2].x - p[1].x),2));
			Point normal((p[2] - p[1]).y * dn/d1, (p[2] - p[1]).x * dn/d1);

			bb[0] = p[2]; bb[1] = p[1];
			bb[2] = p[2] + normal;
			bb[3] = p[1] + normal;
		}
		else{
			double dn = abs((p[2].y - p[0].y) * p[1].x - (p[2].x - p[0].x) * p[1].y + p[2].x * p[0].y - p[2].y * p[0].x)
							/ sqrt(pow((p[2].y - p[0].y),2) + pow((p[2].x - p[0].x),2));
			Point normal((p[2] - p[0]).y * dn/d1, (p[2] - p[0]).x * dn/d1);

			bb[0] = p[2]; bb[1] = p[0];
			bb[2] = p[2] + normal;
			bb[3] = p[0] + normal;
		}

		cout << "Bounding box:\nP1: " >> bb[0] << "\nP2: " >> bb[1]
			<< "\nP3: " >> bb[2] << "\nP4: " >> bb[3] << endl;
	}
public:
	Triangle(Point p1, Point p2, Point p3): p{p1, p2, p3}{}
	Triangle(double x1 = 0, double y1 = 0, double x2 = 0, double y2 = 1, double x3 = 1, double y3 = 0){
		p[0] = Point(x1,y1);
		p[1] = Point(x2,y2);
		p[2] = Point(x3,y3);
	}
};

int main(){
	Circle c(0.0,0.0,23.0,0.0);
	Square s(Point(-10.0, -5.0), Point(-10.0, 20.0), Point(15.0, 20.0), Point(15.0, -5.0));
	Triangle t(Point(0,0), Point(0,20), Point(0,-10));
	
	cout << "Displaying Circle c:\n";
	c.display();

	cout << "Displaying Square s:\n";
	s.display();

	cout << "Displaying Triangle t:\n";
	t.display();
}