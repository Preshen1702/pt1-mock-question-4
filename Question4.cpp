///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 

#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	virtual void name()
	{

	}
	virtual void does()
	{

	}
};

class Dog :public Animal
{
public:
	virtual void name()
	{
		cout << "Pre i'm a dog" << endl;
	}
	virtual void does()
	{
		cout << "bark" << endl;

	}
};
class Bird : public Animal
{
private:
	virtual void name()
	{
		cout << "Tashy i'm a bird" << endl;
	}
	virtual void does()
	{
		cout << "chirp" << endl;
	}
};
int main()
{
	Animal *Ptr;
	Dog dog;
	Bird bird;
	Ptr = &dog;
	Ptr->name();
	Ptr->does();
	Ptr = &bird;
	Ptr->name();
	Ptr->does();
}