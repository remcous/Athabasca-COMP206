// Exercise8-22.cpp
// modified ConstMember.cpp
class X{
	int i;
public:
	X(int ii);
	int f();
};

X::X(int ii) : i(ii){}
int X::f() const { return i; }

int main(){
	X x1(10);
	const X x2(20);
	x1.f();
	x2.f();
}