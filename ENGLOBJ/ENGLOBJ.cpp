//#include <iostream>
//
//using namespace std;
//
//const int MAX = 100;
//
//class Distance
//{
//public:
//	/*void setdist(int ft, float in)
//	{
//		feet = ft;
//		inches = in;
//	}*/
//
//	/*Distance() : feet(0), inches(0.0)
//	{
//
//	}
//
//	Distance(int ft, float in) : feet(ft), inches(in)
//	{
//
//	}*/
//
//	void getdist()
//	{
//		cout << "Enter number of feet: ";
//		cin >> feet;
//		cout << "Enter number of inches: ";
//		cin >> inches;
//	}
//
//	void showdist()const
//	{
//		cout << feet << "\'-" << inches << '\"';
//	}
//
//	/*void add_dist(Distance, Distance);*/
//	Distance add_dist(const Distance&) const;
//
//
//private:
//	int feet;
//	float inches;
//};
//
//
//
//int main()
//{
//	//Distance dist1, dist3;
//	//Distance dist2(11, 6.25);
//
//	///*dist1.setdist(11, 6.25);*/
//	///*dist2.getdist();*/
//
//	//dist1.getdist();
//	///*dist3.add_dist(dist1, dist2);*/
//	//dist3 = dist1.add_dist(dist2);
//
//	//cout << "\ndist1 = ";
//	//dist1.showdist();
//	//cout << "\ndist2 = ";
//	//dist2.showdist();
//	//cout << "\ndist3 = ";
//	//dist3.showdist();
//	//cout << endl;
//
//	Distance dist[MAX];
//	int n = 0;
//	char ans;
//
//	cout << endl;
//
//	do
//	{
//		if (n >= MAX)
//		{
//			cout << "\nArray is full!!! " << endl;
//			break;
//		}
//
//		cout << "Enter length number " << n + 1 << " ";
//		dist[n++].getdist();
//		cout << "Continue typing (y/n)?: ";
//		cin >> ans;
//	} while (ans != 'n');
//
//	for (size_t i = 0; i < n; i++)
//	{
//		cout << "\nLength number " << i + 1 << " : ";
//		dist[i].showdist();
//	}
//
//	cout << endl;
//
//	system("pause");
//	return 0;
//}
//
////void Distance::add_dist(Distance d2, Distance d3)
////{
////	inches = d2.inches + d3.inches;
////	feet = 0;
////
////	if (inches >= 12.0)
////	{
////		inches -= 12.0;
////		feet++;
////	}
////
////	feet += d2.feet + d3.feet;
////}
//
//Distance Distance::add_dist(const Distance& d2) const
//{
//	Distance temp;
//
//	temp.inches = inches + d2.inches;
//
//	if (temp.inches >= 12.0)
//	{
//		temp.inches -= 12.0;
//		temp.feet = 1;
//	}
//
//	temp.feet += feet + d2.feet;
//
//	return temp;
//}


//#include <iostream>
//
//using namespace std;
//
//class Distance
//{
//public:
//
//	Distance() : feet(0), inches(0.0)
//	{
//
//	}
//
//	Distance(int ft, float in) : feet(ft), inches(in)
//	{
//
//	}
//
//	void getdist()
//	{
//		cout << "Enter number of feet: ";
//		cin >> feet;
//		cout << "Enter number of inches: ";
//		cin >> inches;
//	}
//
//	void showdist()const
//	{
//		cout << feet << "\'-" << inches << '\"';
//	}
//
//	Distance operator+(Distance) const;
//
//private:
//	int feet;
//	float inches;
//};
//
//
//
//int main()
//{
//	Distance dist1, dist3, dist4;
//	dist1.getdist();
//
//	Distance dist2(11, 6.25);
//
//	dist3 = dist1 + dist2;
//
//	dist4 = dist1 + dist2 + dist3;
//
//	cout << "dist1 = ";
//	dist1.showdist();
//	cout << endl;
//	cout << "dist2 = ";
//	dist2.showdist();
//	cout << endl;
//	cout << "dist3 = ";
//	dist3.showdist();
//	cout << endl;
//	cout << "dist4 = ";
//	dist4.showdist();
//	cout << endl;
//
//	system("pause");
//	return 0;
//}
//
//Distance Distance::operator+(Distance d2) const
//{
//	int f = feet + d2.feet;
//	float i = inches + d2.inches;
//
//	if (i >= 12.0)
//	{
//		i -= 12.0;
//		f++;
//	}
//
//	return Distance(f, i);
//}


//#include <iostream>
//
//using namespace std;
//
//class Distance
//{
//public:
//
//	Distance() : feet(0), inches(0.0)
//	{
//
//	}
//
//	Distance(int ft, float in) : feet(ft), inches(in)
//	{
//
//	}
//
//	void getdist()
//	{
//		cout << "Enter number of feet: ";
//		cin >> feet;
//		cout << "Enter number of inches: ";
//		cin >> inches;
//	}
//
//	void showdist()const
//	{
//		cout << feet << "\'-" << inches << '\"';
//	}
//
//	bool operator< (Distance) const;
//
//private:
//	int feet;
//	float inches;
//};
//
//
//
//int main()
//{
//	Distance dist1;
//	dist1.getdist();
//
//	Distance dist2(6, 2.5);
//
//	cout << "\ndist1 = ";
//	dist1.showdist();
//	cout << "\ndist2 = ";
//	dist2.showdist();
//
//	if (dist1 < dist2)
//	{
//		cout << "\ndist1 less than dist2";
//	}
//	else
//	{
//		cout << "\ndist1 greater than or equal to dist2";
//	}
//
//	cout << endl;
//
//	system("pause");
//	return 0;
//}
//
//bool Distance::operator<(Distance d2) const
//{
//	float bf1 = feet + inches / 12;
//	float bf2 = d2.feet + d2.inches / 12;
//	
//	return (bf1 < bf2) ? true : false;
//}


#include <iostream>

using namespace std;

class Distance
{
public:

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

	void operator+= (Distance);

private:
	int feet;
	float inches;
};



int main()
{
	Distance dist1;
	dist1.getdist();

	cout << "\ndist1 = ";
	dist1.showdist();

	Distance dist2(11, 6.25);

	cout << "\ndist2 = ";
	dist2.showdist();

	dist1 += dist2;

	cout << "\nAfter addition: ";
	cout << "\ndist1 = ";
	dist1.showdist();

	cout << endl;

	system("pause");
	return 0;
}

void Distance::operator+=(Distance d2)
{
	feet += d2.feet;
	inches += d2.inches;

	if (inches >= 12.0)
	{
		inches -= 12.0;
		feet++;
	}
}