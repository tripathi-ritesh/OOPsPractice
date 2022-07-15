#include <iostream>
#include <string>
using namespace std;

class Student {

public:
	string address;
	int roll_no;
	long long mobile;
	string name;
};

	class Triangle {
	public:
		int s = 0;
		int s1, s2, s3;
		Triangle(int a, int b, int c)
		{
			s1 = a;
			s2 = b;
			s3 = c;
			s = a + b + c;
		}
		int printPerimetr(int a, int b, int c)
		{
			
			s = a + b + c;
			return s;
		}
		int printArea()
		{
			
			long long area;
			area = s / 2;
			return area;
			
		}
	};
	class Rectangle {
	public:
		int length, bredth;
		int printAreaRectangle(int l, int b)
		{
			length = l;
			bredth = b;
			int area = length * bredth;
			
			return area;
		}
	};
	class Area {
	public:
		int length, breadth;

		void setDim(int l, int b)
		{
			length = l;
			breadth = b;
		//	cout<<"\nArea Of Rectangle is : "<<getArea();
		}
		int getArea()
		{
			int area = length * breadth;
			return area;
		}
	};
	


int main() 
{




	/*Area area;
	int l, b;
	cout << "Enter Length" << endl;
	cin >> l;
	cout << "\nEnter Breadth" << endl;
	cin >> b;
	area.setDim(l,b);
	cout<<"Area of Reactangle is : "<<area.getArea();*/

	


	//Rectangle rect;
	//cout<<"Area of 1st Rectangle : \n "<<rect.printAreaRectangle(4,5);
	//cout << endl;
	//cout<< "Area of 2nd Rectangle : \n " << rect.printAreaRectangle(5,8);


	//Triangle tri(3,4,5);
	//cout << "\nPerimeter Of Triangle Is : " << tri.printPerimetr(3, 4, 5) <<endl;
	//cout << "\nArea Of Triangle Is : " << tri.printArea() << endl;


	/*Student std1, std2;
	std1.name = "John";
	std1.roll_no = 112;
	std1.address = "Lokhand wala Mumbai";
	std1.mobile = 9598351245;
	std2.name = "John";
	std2.roll_no = 154;
	std2.address = "India Gate Delhi";
	std2.mobile = 9598345739;
	cout << std1.name << std1.roll_no << std1.address << std1.mobile << endl;
	cout << std2.name << std2.roll_no << std2.address << std2.mobile << endl;*/
	
	//Student stdnt;
	//stdnt.name = "John";
	//stdnt.roll_no = 2;
	//cout << stdnt.name << endl;
	//cout << stdnt.roll_no;


	return 0;
}