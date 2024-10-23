#include "Point.h"
#include <cmath>
using namespace std;

// Point::Point(int x, int y) : x(x), y(y){}

Point::Point(int x, int y){
  this->x = x;
  this->y = y;
}

void Point::setX(int x){ this->x = x;}

void Point::setY(int y){ this->y = y;}

int Point::getX() const{ return x;}

int Point::getY() const{ return y;}

bool Point::operator==(const Point& other) const{
  return (x == other.x && y == other.y);
}

bool Point::operator!=(const Point& other) const{
  return !(x == other.x && y == other.y);
}

bool Point::operator<(const Point& other) const{
  return ((pow(x,2)+ pow(y,2)) < (pow(other.x,2)+ pow(other.y,2)));
}

bool Point::operator>(const Point& other) const{
  return ((pow(x,2)+ pow(y,2)) > (pow(other.x,2)+ pow(other.y,2)));
}

bool Point::operator<=(const Point& other) const{
  return !((pow(x,2)+ pow(y,2)) > (pow(other.x,2)+ pow(other.y,2)));
}

bool Point::operator>=(const Point& other) const{
  return !((pow(x,2)+ pow(y,2)) < (pow(other.x,2)+ pow(other.y,2)));
}

Point Point::operator+(int value){
  return Point{ (x + value), (y + value) };
}

Point& Point::operator+=(int value){
  x += value;
  y += value;
  return *this;
}

ostream& operator<<(ostream& stream, const Point& other){
  stream << other.x << ", " << other.y;
  return stream;
}