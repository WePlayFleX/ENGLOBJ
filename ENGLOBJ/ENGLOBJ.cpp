#include <iostream>

using namespace std;

class Distance
{
public:
	/*void setdist(int ft, float in)
	{
		feet = ft;
		inches = in;
	}*/

	Distance() : feet(0), inches(0.0)
	{

	}

	Distance(int ft, float in) : feet(ft), inches(in)
	{

	}

	void getdist()
	{
		cout << "Enter number of feet: ";
		cin >> feet;
		cout << "Enter number of inches: ";
		cin >> inches;
	}

	void showdist()
	{
		cout << feet << "\'-" << inches << '\"';
	}

	/*void add_dist(Distance, Distance);*/
	Distance add_dist(Distance);


private:
	int feet;
	float inches;
};



int main()
{
	Distance dist1, dist3;
	Distance dist2(11, 6.25);

	/*dist1.setdist(11, 6.25);*/
	/*dist2.getdist();*/

	dist1.getdist();
	/*dist3.add_dist(dist1, dist2);*/
	dist3 = dist1.add_dist(dist2);

	cout << "\ndist1 = ";
	dist1.showdist();
	cout << "\ndist2 = ";
	dist2.showdist();
	cout << "\ndist3 = ";
	dist3.showdist();
	cout << endl;

	system("pause");
	return 0;
}

//void Distance::add_dist(Distance d2, Distance d3)
//{
//	inches = d2.inches + d3.inches;
//	feet = 0;
//
//	if (inches >= 12.0)
//	{
//		inches -= 12.0;
//		feet++;
//	}
//
//	feet += d2.feet + d3.feet;
//}

Distance Distance::add_dist(Distance d2)
{
	Distance temp;

	temp.inches = inches + d2.inches;

	if (temp.inches >= 12.0)
	{
		temp.inches -= 12.0;
		temp.feet = 1;
	}

	temp.feet += feet + d2.feet;

	return temp;
}