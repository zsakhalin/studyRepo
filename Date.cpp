#include <iostream>

using namespace std;

class Date
{
public:
	Date();
	~Date();
	void Mew();
	
private:
	// int dmy[8];
	int* ptr_to_alloc = new int[size];
};
Date::Date(int size){}
Date::~Date(){}
void Date::Mew()
{
	cout << "Mew" << endl;
}
int main()
{
	cout << "hello " << endl;
	Date a1;
	a1.Mew();
	// a1.dmy = 1;
	cout << a1.dmy;
	return 0;
}

//Выделяем динамически память, храним указатель на область и сопутствующие данные.
// int main()
// {
//     const size_t size = 5;
//     int* arr = new int[size];
 
//     for (int i = 0; i < size; ++i) 
//         arr[i] = i; 
 
//     int* tmp_a = arr;
 
//     const size_t size2 = size * 2;
 
//     arr = nullptr;
//     arr = new int[size2];
 
//     for (int i = 0; i < size2; ++i)
//     {
//         if (i < size)
//             arr[i] = tmp_a[i];
//         else
//             arr[i] = i;
//     }
 
//     for (int i = 0; i < size2; ++i)
//         std::cout << arr[i] << std::endl;
 
//     delete[] tmp_a;
//     delete[] arr;
 
//     return 0;
// }