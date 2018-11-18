#include <iostream>

using namespace std;

class rectangle {
   public:
      double length;         // Length of a rectangle
      double breadth;        // Breadth of a rectangle
      

      // Member functions declaration
      double getarea(void);
      double getperimeter(void);
      void setLength( double len );
      void setBreadth( double bre );
     
};

// Member functions definitions
double rectangle::getarea(void) {
   return length * breadth;
}
double rectangle::getperimeter(void) {
 return 2*(length+breadth);
 }

void rectangle::setLength( double len ) {
   length = len;
}
void rectangle::setBreadth( double bre ) {
   breadth = bre;
}


// Main function for the program
int main() {
   rectangle rectangle1;                // Declare rectangle1 of type rectangle
   rectangle rectangle2;                // Declare rectangle2 of type rectangle
   double area1 = 0.0;     // Store the area of  rectangle1 here
   double perimeter1 = 0.0; //store the perimetre of  rectangle1 here
   double area2 = 0.0;     // Store the area of  rectangle2 here
   double perimeter2 = 0.0; //store the perimetre of  rectangle2 here

   // rectangle 1 specification
   rectangle1.setLength(6.0); 
   rectangle1.setBreadth(5.0); 
   
   // rectangle 2 specification
   rectangle2.setLength(15.0); 
   rectangle2.setBreadth(2.0); 
   

   // area of rectangle 1
   area1 = rectangle1.getarea();
   cout << "area of rectangle1 : " << area1 <<endl;
   // perimeter of rectangle 1
   perimeter1 = rectangle1.getperimeter();
    cout <<"perimeter of rectangle1 :"<<perimeter1<<endl;
   // area of rectangle 2
   area2 = rectangle2.getarea();
   cout << "area of rectangle2 : " << area2 <<endl;
// perimeter of rectangle 2
   perimeter2 = rectangle2.getperimeter();
    cout <<"perimeter of rectangle2 :"<<perimeter2<<endl;

if(area1<area2)
	{
		cout<<"Larger rectangle in area is second rectangle with area= "<<area2<<endl;
		cout<<"Smaller rectangle in area is first rectangle with area= "<<area1<<endl;
	}
        else if (area1 = area2)
                   {
                     cout <<"both rectangle has same area, the area is "<<area2<<endl;
                   }
	  else{
		cout<<"Larger rectangle in area is first rectangle with area= "<<area1<<endl;
		cout<<"Smaller rectangle in area is second rectangle with area= "<<area2<<endl;
	         }
	
	if(perimeter1<perimeter2)
	{
		cout<<"Larger rectangle in perimeter is second rectangle with perimeter= "<<perimeter2<<endl;
		cout<<"Smaller rectangle in perimeter is first rectangle with perimeter= "<<perimeter1<<endl;
	}
         else if (perimeter1 = perimeter2)
                   {
                     cout <<"both rectangle has same perimeter, the perimeter is "<<perimeter1<<endl;
                   }
	else{
		cout<<"Larger rectangle in perimeter is first rectangle with perimeter= "<<perimeter1<<endl;
		cout<<"Smaller rectangle in perimeter is second rectangle with perimeter= "<<perimeter2<<endl;	
}
   return 0;
  }

