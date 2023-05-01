// c++ program to display "=" opertors can be overloaded
#include<iostream>
using namespace std;
class Myclass{
	public:
		int value;
		Myclass(int val):value(val){
		}
		Myclass operator =(const Myclass & other )
		{
			return Myclass(value = other.value);
		}
};
int main()
{
	Myclass num1(15);
	Myclass num2(10);
	Myclass equal=num1;
	cout<<equal.value<<endl;
	return 0;
}
