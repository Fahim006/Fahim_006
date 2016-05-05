#include <iostream>

using std::cout;
using std::cin;
using std::endl;

inline double cube(const double s) {return s*s*s;}

int main()

{
	double side;

	for(int k=1;k<4;k++){
		cout<<"Enter the side length of your cube:";
		cin>>side;
		cout<<" Volume of cube with side "
			<< side << " is " << cube(side) << endl;
	}
	return 0;
}
