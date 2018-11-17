#include <iostream>
using namespace std;
//Declaration of class Point

// class Point represents a two-dimensional point
class position{
public:
// default class constructor (with no arguments):
  int point();

// class constructor that sets the coordinates x, y to the values xval,
// yval:
  int pointcoordinate( int xval, int yval);
// member functions for getting values of x, y:
  int getx()const;
  int gety()const;
 // member functions for setting x, y to xval, yval respectively
   void setx(int xval);
   void sety(int yval);

//Add declaration of member function Print here:
   int print(int x, int y);
// private data members x, y represent coordinates of the point:
   private:
          int x;
          int y;
    };
int position ::point()  {
                   x=0;
                   y=0;
              }

// class constructor sets X, Y to given values xval, yval:
int position :: pointcoordinate(int xval, int yval) {
            x = xval;
            y= yval;
   }

// getx,gety returns the value of the x,y coordinate
int position :: getx()const {
      return x;  }
int position :: gety()const  {
      return y;  }
// setX,sety sets the value of x,y coordinate to xval
void position :: setx(int xval){
    x = xval;
   }
void position :: sety(int yval){
   y= yval;  }
//Lab 7 exercise 4.1. Add definition of member function print:
int position:: print(int x, int y) {
cout <<"the coordinate is ("<<x<<","<<y<<")"<<endl;  }

int main() {
// define a example of position
position coordinate1;

int point1coordinate = (0,0);  

coordinate1. setx(5);
coordinate1. sety(6);

cout << "For the 1st point "<<coordinate1.print(coordinate1.getx(),coordinate1.gety())<<endl;
 return 0;
  }
