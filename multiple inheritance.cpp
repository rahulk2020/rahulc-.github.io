#include<iostream>
using namespace std;

class M{
	protected:
		int m;
		public:
			void getm(int);
};
class N{
	protected:
		int n;
		public:
			void getn(int);
};
class P:public M,public N
{
	public:
		void display(void);
};
void M::getm(int x){
	m=x;
}
void N::getn(int y){
	n=y;
}
void P::display(void)
{
	cout<<"the value of M: "<<m<<endl;
	cout<<"the value of N: "<<n<<endl;
	cout<<"m * n : "<<m*n<<endl;
}


int main()
{
	P p1;
	p1.getm(50);
	p1.getn(50);
	p1.display();
	
	return 0;
}
