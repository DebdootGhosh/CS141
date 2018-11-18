#include <iostream>
using namespace std ;



// class Point represents a two-dimensional point
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

// class constructor sets X, Y to zero when no values are specified:
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
	Point a,b,c,d; /*here a b c d are vetices starting from left bottom */
	int side1();
	int side2();
	public:	
	rectangle();
	rectangle(Point j,Point k);//constructor 
	void print_a();
	void print_b();
	void print_c();
	void print_d();
	float area();
};
// for class rectangle
rectangle::rectangle()
{
	a.Set_X(0);
	a.Set_Y(0);
	b.Set_X(1);
	b.Set_Y(0);
	c.Set_X(0);
	c.Set_Y(1);
	d.Set_X(1);
	d.Set_Y(1);
}
rectangle::rectangle(Point j,Point k)//constructor 
{
	a=j; //put the value of points to the variabls in class
	c=k;
	b.Set_X(c.Get_X());
	b.Set_Y(a.Get_Y());
	d.Set_X(a.Get_X());
	d.Set_Y(c.Get_Y());
}
void rectangle::print_a()//a function to print the point a
{
	cout<<"cordinate of left bottom point A is";
  a.print();
}
void rectangle::print_b()// a function to print the point b
{
	cout<<"cordinate of right bottom point B is";
  b.print();
}
void rectangle::print_c()//function to print the point c
{
	cout<<"cordinate of right top point C is";
	c.print();
}
void rectangle::print_d()//function to print the point d
{
 cout<<"cordinate of left top point D is";
 	d.print();
}
int rectangle::side1() //function to find the length of each side
{
return (a.Get_X() - b.Get_X()); 
}
int rectangle::side2() 
{
return (a.Get_Y()-d.Get_Y()); //substract the y cordinates of a and d
}
float rectangle::area()
{
 return side1()*side2(); //multiply both the sides
}
int main()
{               
	int x,y;
	cout<<"if two diagonals are given of a rectangle with sides parallel to the x and y axis Enter the cordinates left bottom point of needed rectangle(x cordinate first then y cordinate):";
	cin>>x>>y;
  Point t(x,y);
	cout<<"Enter the cordinates right top point of needed rectangle(x cordinate first then y cordinate):";
	cin>>x>>y;
  Point u(x,y);	
                                 /* instruction to user for inputting the values with the constrain that the first one is leftbottom and the next is top right*/
	rectangle q(t,u);
	q.print_a();
	q.print_b();
	q.print_c();
	q.print_d();
 	cout<<"the area of the rectangle is:"<<q.area();
	cout<<"out-put for default settings";
	rectangle r;
	r.print_a(); 
	r.print_b();
	r.print_c();
	r.print_d();
 	cout<<"arear of default rectangle is"<<r.area();
  return 0;
}
