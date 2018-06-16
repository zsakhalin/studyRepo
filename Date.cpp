#include <iostream>

using namespace std;

class Date
{
public:
	Date(int dd, int mm, int yyyy);
	Date(const Date &);
	~Date();
	// void SetDD(int dd){ ptr_to_alloc[0] = dd;}
	int GetDD() const{ return *ptr_to_alloc;}
	
private:
	int size = 3;
	int* ptr_to_alloc;

};
Date::Date(int dd, int mm, int yyyy)
{
	ptr_to_alloc =  new int[3];
	cout << "Constructor called" << endl;
	ptr_to_alloc[0] = dd;
	ptr_to_alloc[1] = mm;
	ptr_to_alloc[2] = yyyy;
	cout << "\t" << ptr_to_alloc[0] << "." << ptr_to_alloc[1] << "." << ptr_to_alloc[2] << "." << endl;
}
Date::Date(const Date & theDate)
{
	cout << "CopyConstructor called" << endl;
	// ptr_to_alloc = new int[size];

	ptr_to_alloc = new int[3];
	*ptr_to_alloc = *(theDate.ptr_to_alloc);
	cout << "\t" << ptr_to_alloc[0] << "." << ptr_to_alloc[1] << "." << ptr_to_alloc[2] << "." << endl;
}
Date::~Date()
{
	cout << "Destructor called" << endl;
	delete[] ptr_to_alloc;
}
int main()
{
	cout << "________ " << endl;
	Date s(10,2,3);
	Date t(s);
	Date t1(10,12,300) ;
	t = t1;
	cout << t.GetDD() << endl;
	return 0;
}
