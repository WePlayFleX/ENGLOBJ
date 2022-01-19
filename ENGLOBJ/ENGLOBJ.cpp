#include <iostream>

using namespace std;

class Distance
{
public:
	void setdist(int ft, float in)
	{
		feet = ft;
		inches = in;
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

private:
	int feet;
	float inches;
};



int main()
{
	Distance dist1, dist2;
	dist1.setdist(11, 6.25);
	dist2.getdist();

	cout << "\ndist1 = ";
	dist1.showdist();
	cout << "\ndist2 = ";
	dist2.showdist();
	cout << endl;

	system("pause");
	return 0;
}