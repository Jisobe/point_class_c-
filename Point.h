#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class Point{

  private:
    int x, y;

  public:
    Point(int x, int y); // constructor
    void setX(int x); // set
    void setY(int y); // set
    int getX() const;
    int getY() const;
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;
    bool operator<(const Point& other) const;
    bool operator>(const Point& other) const;
    bool operator<=(const Point& other) const;
    bool operator>=(const Point& other) const;
    Point operator+(int value);
    Point& operator+=(int value);

    friend ostream& operator<<(ostream& stream, const Point& other);

};

#endif