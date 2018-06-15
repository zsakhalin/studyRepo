#include <iostream>

using namespace std;

class Date
{
public:
	void Mew(){cout << "Mew" << endl;}
// 	Date();
// 	~Date();
	
// private:
	// int dmy[8];
	int dmy;
};

int main()
{
	cout << "hello " << endl;
	Date a1;
	a1.Mew();
	a1.dmy = 1;
	cout << a1.dmy;
	return 0;
}
