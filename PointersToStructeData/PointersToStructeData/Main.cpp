#include <iostream>
using namespace std;


struct studentType
{
	char name[50];
	double gpa;
	int sId;
	char grade;
};

class myClass
{
private:
	int x;

public:
	void setX(int a) { x = a; }
	void print() const { cout << x << endl; }
};

int main()
{
	studentType stu1; //declare object of type studentType
	studentType *stuPtr; //pointer of type studentType

	//store the address of the object into pointer
	stuPtr = &stu1;

	//when accessing public members of a struct we just
	//use the object name and the member access operator
	//(AKA: the DOTINATOR)


	stu1.gpa = 3.5;
	stu1.grade = 'A';

	//use the pinter to display the gpa for stu1
	cout << (*stuPtr).gpa << endl;
	cout << (*stuPtr).grade << endl;

	//the dotinator has higher precedence than the *, so
	//you must use () if you are using this method

	//...otherwise we use the built in shortcut

	//ACCESS ARROW OPERATOR
	//AKA: THE ARROW-ANATOR
	cout << stuPtr->gpa << endl;
	cout << stuPtr->grade << endl << endl;
	
	//stuPtr->gpa	is the same as	(*stuPtr).gpa


	//challenge:
	//declare a pointer and object of type myClass
	myClass class1;
	myClass *classPointer;

	//store the address of the object in the pointer
	classPointer = &class1;

	//using the pointer, store 99 in x
	classPointer->setX(99);

	//using the pointer, call print function
	classPointer->print();


	return 0;
}