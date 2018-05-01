#include "Main.cpp"
#include <gtest/gtest.h>

#define CPF cout << __PRETTY_FUNCTION__ << endl

void literalTest(){

	CPF;

	string name = "Hello"  "World";

	string name1 = "Helloooooo\ 
	World";

	cout << name << endl;
	cout << name1 << endl;

	int i = 052;
	int j = 0xA;

	cout << "052 = " << i << endl;
	cout << "0xA = " <<  j<< endl;
}

void sizeofTest(){
 	
 	CPF;

	int array[3] = {1,2,3};
	cout << "char " << sizeof(char) << " int " << sizeof(int) << " double " << sizeof(double) << 	endl;
	cout <<"short " << sizeof(short) << " long " << sizeof(long) << " long int " << sizeof(long int) << endl;

	cout << "int array[3] = {1,2,3}; size \a " << sizeof(array) << endl; 

	cout << "char* " << sizeof(char*) << " int* " << sizeof(int*) << " double* " << sizeof(double*) << 	endl;



}

void assignmentTest() {

	CPF;

	int x = 0;

	int y = 2 + (x = 3);

	cout << "int x = 0;\n int y = 2 + (x = 3);\n x =" << x << " y = " << y << endl;

	int z = 2;
	x = (y) = z = 5;

	cout << "int z = 2;\nx = y = z = 5;\n x=" << x << " y=" << y<< " z=" << z << endl;
}

void commaOperator()
{
	CPF;

	int a , b = 0;

	cout <<"int a,b = 0; a=" << a << " b=" << b << endl;
	cout << "variable a is not defined" << endl;

	int c = 0, d = 0;
	cout <<"int c =0 ,d = 0; c=" << c << " d=" << d << endl;

	c = (a = 3, a +5);

	cout <<"c = (a = 3, a +5); \n a=" << a << " c=" << c << endl;

	int e = (1,2,3);

	cout <<"int e = (1,2,3); e=" << e << endl;

	int f =  (a, e); 

	cout << "int f =  (a, e); f=" << f << endl;

}

void bitShiftOperatorTest(){

	CPF;

	int a = 1, b = -1;

	a = a <<1;

	cout << "int a = 1, b = -1; \na = a <<1; a=" << a << endl;

	a = a << 2;

	cout << "a = a << 2; a =" << a << endl;

	b = b << 4;

	cout << "b = b << 4; b =" << b << endl;

	a = a >> 8;

	cout << "a = a >> 8; a=" << a << endl;
}

void innerBlockScopeTest(){

	CPF;

	int x =0, y=1;

	cout << "Outer x=" << x << " y=" << y << endl;

	{
		int x = 10;

		cout << "Inner 1 x=" << x << " y=" << y << endl;

		{
			double y = 2.4;

			cout << "Inner 2 x=" << x << " y=" << y << endl;
		}

		cout << "Inner 1 x=" << x << " y=" << y << endl;
	}

	cout << "Outer x=" << x << " y=" << y << endl;	
}

int globalVar;

namespace first
{
  int x = 5;
  int y;
}

namespace second
{
  double x = 3.1416;
}

void staticVsAutomaitcVariableInitTest(){

	CPF;
	using first::x;

	int y;

	cout <<"from first namespace x=" << x<< " y=" << first::y << endl;
	cout << "local scope y=" << y << endl;
	cout << "globalVar " << globalVar << endl;
	
}

void pointerArithmeticTest() 
{
	CPF;

	int array[5] {0, 1, 2, 3, 4};

	int* ptr = array;

	cout << "int array[5] {0, 1, 2, 3, 4};\nint* ptr = array;\n";
	cout << "*ptr++ " << *ptr++ << " same as *(p++): increment pointer, and dereference unincremented address\n";
	cout << "*++ptr "  << *++ptr << " same as *(++p): increment pointer, and dereference incremented address\n";
	cout << "++*ptr " << ++*ptr <<" same as ++(*p): dereference pointer, and increment the value it points to\n";
	cout << "(*ptr)++ " << (*ptr)++  << " dereference pointer, and post-increment the value it points to \n";


}

void pointerToPointerTest(){
	CPF;

	char a = 'Z';
	char * b = &a;
	char ** c = &b;

	cout << "sizeof char**=" << sizeof(char**) << endl;

	cout << " a=" << a << " *b=" << *b << " *c=" << *c << " **c=" << **c << endl;  
}

int add(int a, int b)
{
	return a+b;
}

int subtract(int a , int b){
	return a -b;
}

int opearation(int a, int b, int( *functionPointer)(int , int)){

		return functionPointer(a,b);
}

void pointersToFunctionTest(){

	cout << opearation(1,2, add) << " " << opearation(50,2, subtract) << endl;

	int(*minus) (int, int) = subtract;

	cout << subtract(8,2) << endl;
}

struct A {
	int a ;
	int b = 1;


} firstS, scondS;

void structTest(){
	CPF;
	cout << "firstS.a=" << firstS.a <<   " scondS.b=" << scondS.b << endl;
}

union mix_t {

	int l;
	struct data
	{
		short hi;
		short lo;
	} s;

	char c[4];
} mix;


void unionTest(){
	CPF;

	cout << " mix.l =" << mix.l << " mix.s.hi=" << mix.s.hi<< " mix.s.lo=" << mix.s.lo << endl;
	cout << " char array " << mix.c[0] << " " << mix.c[1] << " " << mix.c[2] << " " << mix.c[3] << endl;

	strcpy(mix.c, "ABC");

	cout << " mix.l =" << mix.l << " mix.s.hi=" << mix.s.hi<< " mix.s.lo=" << mix.s.lo << endl;
	cout << " char array " << mix.c[0] << " " << mix.c[1] << " " << mix.c[2] << " " << mix.c[3] << endl;


	strcpy(mix.c, "A  ");

		cout << " mix.l =" << mix.l << " mix.s.hi=" << mix.s.hi<< " mix.s.lo=" << mix.s.lo << endl;
	cout << " char array " << mix.c[0] << " " << mix.c[1] << " " << mix.c[2] << " " << mix.c[3] << endl;

}

enum class Colors {

	white = 1,
	black

} ;

enum COLORS {
	WHITE,
	BLACK
};

void enumAndEnumClassTest(){

	CPF;

	Colors  a = Colors::white;



	cout << COLORS::WHITE <<  endl;
}


class Circle {
    double radius;
  public:
    Circle(double r) ;
    Circle() {}
    double area() {return radius*radius*3.14159265;}
};

Circle::Circle(double r) : radius(r) { }

class Cylinder {
    Circle base;
    double height;
  public:

  	Cylinder() = default;	
    Cylinder(double r, double h) :base(r), height(h) {

     	cout << "Member object intialisation can only be done in the intialiser list as done above." << endl;
    }
    double volume() {return base.area() * height;}
};

void memberInitialisationInConstructorTest(){

	CPF;

	Cylinder cyl(2, 20);

	Cylinder cyl1();

	cout << "Cylinder volume=" << cyl.volume() << endl;
}


class _2DVector 	{

public:
	_2DVector(int x, int y) : x{x}, y{y}{
		cout << " x=" << x << " y=" << y << endl;
	}
	_2DVector() = default;

  _2DVector operator + (const _2DVector & rhs) ;

  int x =0, y=0;
private:
	
};

 _2DVector _2DVector:: operator + (const _2DVector & rhs){

 	cout << " This x=" << x << " rhs.x=" << rhs.x << endl;

 	_2DVector temp;

 	temp.x = x + rhs.x;
 	temp.y = y + rhs.y;

 	return temp;
 }

void operatorOverloadTest(){

	CPF;

	_2DVector v1(1,2), v2(3,4);

	_2DVector temp = v1 + v2;

	cout << " temp.x=" << temp.x << " temp.y=" << temp.y << endl;
}

class CopyCostruct{

public:
	CopyCostruct() : ptr("Hello World\n"){CPF; cout <<ptr; };

	CopyCostruct( const CopyCostruct &); // CopyConstructor

	CopyCostruct & operator = (const CopyCostruct &); // CopyAssignment

private: 
	char * ptr = nullptr;
};

CopyCostruct::CopyCostruct(const CopyCostruct & object){

	CPF;	
}

CopyCostruct& CopyCostruct::operator = (const CopyCostruct& object){

	CPF;

	return *this;
}

void copyConstructorTest(){
	CPF;	

	cout<<"CopyCostruct a;" << endl;
	CopyCostruct a;

	cout<<"CopyCostruct b(a);" << endl;
	CopyCostruct b(a);

	cout<<"CopyCostruct c = b;" << endl;
	CopyCostruct c = b;

	cout <<" c = a" << endl;
	c = a;
}

class MoveConstruct{

public: 
	MoveConstruct();
	MoveConstruct(MoveConstruct&&); // move constructor
	MoveConstruct& operator= (MoveConstruct && ); // move Assignment

};

MoveConstruct::MoveConstruct(){
	CPF;
}

MoveConstruct::MoveConstruct(MoveConstruct&& object){
	CPF;
}

MoveConstruct& MoveConstruct::operator = (MoveConstruct && object){
	CPF;

	return * this;
}

MoveConstruct getObject(){

	return MoveConstruct();
}

void moveConstructorTest() {

	CPF;
	cout << " " << endl;
 	MoveConstruct a;

 	cout << "MoveConstruct b = a" << endl;
 	//MoveConstruct b = a;

 	cout << "MoveConstruct b = MoveConstruct();" << endl;
 	MoveConstruct b = MoveConstruct();

 	cout << " " << endl;
 	MoveConstruct c = getObject();
}

namespace castTest{

class A{

public:
	A () { CPF;}
};

class B{

public:
	 // conversion from A (constructor):
	B (const A &) {  CPF; }

	 // conversion from A (assignment):
	B& operator = (const A &){ CPF; return *this;}

	 // conversion to A (type-cast operator)

	operator A() { CPF; return A();}
};

void implicitClassCastTest(){

	CPF;

	cout << "A a;" << endl;
	A a;

	cout << "B b(a);" << endl;
	B b(a);

	cout << "b=a;" << endl;
	b = a;

	cout << "a=b;" << endl;
	a = b;
}

}

int main(int argc, char **argv) {


	literalTest();
	sizeofTest();
	assignmentTest();
	commaOperator();
	bitShiftOperatorTest();
	innerBlockScopeTest();
	staticVsAutomaitcVariableInitTest();
	pointerArithmeticTest();
	pointerToPointerTest();
	pointersToFunctionTest();
	structTest();
	unionTest();
	enumAndEnumClassTest();
	memberInitialisationInConstructorTest();
	operatorOverloadTest();
	copyConstructorTest();
	moveConstructorTest();
	castTest::implicitClassCastTest();

}

