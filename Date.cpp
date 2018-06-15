#include <iostream>

using namespace std;

class Date
{
public:
	Date();
	~Date();
	
private:
	int dmy[8] = 0;
};

int main()
{
	cout << "hello " << endl;
	Date a1;

	return 0;
}