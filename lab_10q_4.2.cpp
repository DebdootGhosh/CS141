#include <iostream>
using namespace std;
class Point
{
public:
  Point(); 

  // class constructor that sets the coordinates x, y to the values xval,
  // yval:
  Point(int xval, int yval);

  // member function for moving a point by dx, dy:
  void Move(int dx, int dy);

  // member functions for getting values of x, y:
  int Get_X() const;
  int Get_Y() const;

  // member functions for setting x, y to xval, yval respectively  
  void Set_X(int xval);
  void Set_Y(int yval);

	void print();

// private data members x, y represent coordinates of the point:
private:
  int X;
  int Y;
}; 
Point::Point()
{
  X = 0;
  Y = 0;
}

// class constructor sets X, Y to given values xval, yval:
Point::Point(int xval, int yval)
{
  X = xval;
  Y = yval;
}

// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy)
{
  X += dx;
  Y += dy;
}

// Get_X returns the value of the X coordinate
int Point::Get_X() const
{
  return X;
}

// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const
{
  return Y;
}

// Set_X sets the value of X coordinate to xval
void Point::Set_X(int xval)
{
  X = xval;
} 

// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval)
{
  Y = yval;
} 
    


void Point::print()
{
	cout<<": ("<<X<<","<<Y<<")"; //function to print the points

}

class rectangle
{
	private:
	Point A,B,C,D; /*here A B C D are vetices starting from left bottom */
	public:
	rectangle();
	rectangle(Point j,Point k);//constructor 
	void print_A();
	void print_B();
	void print_C();
	void print_D();
};
//methods for class rectangle
rectangle::rectangle()
{
	A.Set_X(0);
	A.Set_Y(0);
	B.Set_X(1);
	B.Set_Y(0);
	C.Set_X(0);
	C.Set_Y(1);
	D.Set_X(1);
	D.Set_Y(1);
}
rectangle::rectangle(Point j,Point k)//constructor 
{
	A=j; // put the value of points to the variabls in class
	C=k;
	B.Set_X(C.Get_X());
	B.Set_Y(A.Get_Y());
	D.Set_X(A.Get_X());
	D.Set_Y(C.Get_Y());
}
void rectangle::print_A()//function to print the point A
{
	cout<<"cordinate of left bottom point A is";
  A.print();
}
void rectangle::print_B()//function to print the point B
{
	cout<<"cordinate of right bottom point B is";
  B.print();
}
void rectangle::print_C()//function to print the point C
{
	cout<<"cordinate of right top point C is";
	C.print();
}
void rectangle::print_D()//function to print the point D
{
 cout<<"cordinate of left top point D is";
 	D.print();
}
int main()
{               
	int x,y;
	cout<<"if two diagonal entries are given of a rectangle with sides parallel to the x and y axis Enter the cordinates left bottom point of needed rectangle(x cordinate first then y cordinate):";
	cin>>x>>y;
  Point t(x,y);
	cout<<"Enter the cordinates right top point of needed rectangle(x cordinate first then y cordinate):";
	cin>>x>>y;
  Point u(x,y);	
                                 /* instruction to user for inputting the values with the constrain that the first one is leftbottom and the next is top right*/
	rectangle q(t,u);
	q.print_A(); 
	q.print_B();
	q.print_C();
	q.print_D();
	cout<<" out-put for default settings\n";
	rectangle r;
	r.print_A(); 
	r.print_B();
	r.print_C();
	r.print_D();
  return 0;
}
















