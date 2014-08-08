#include "RecyclineFactory.hpp"

using namespace std;

USING_NAMESPACE_SWITCHTOOL

class AA : public Product
{
public:
	AA(void)
	{
		a = 0;
	}
	~AA(void) {}
	void Recycling(void)
	{
        a = 100;
	}

	int a;

};


int main(void)
{
	RecyclingFactorySingleton< AA, string >& fact1 = RecyclingFactorySingleton< AA, string >::get_mutable_instance();
	RecyclingFactorySingleton< AA, string >::TheProduct* p = fact1.Produce("AA1");
	cout << "AA1 Before : " << p << "\t" << p->GetProduct() << "\t" << p->GetProduct()->a << endl;
	p->GetProduct()->a = 5;
	cout << "AA1 After : " << p << "\t" << p->GetProduct() << "\t" << p->GetProduct()->a << endl << endl;
	fact1.Recycling(p);

	p = fact1.Produce("AA2");
	cout << "AA2 Before : " << p << "\t" << p->GetProduct() << "\t" << p->GetProduct()->a << endl;
	p->GetProduct()->a = 10;
	cout << "AA2 After : " << p << "\t" << p->GetProduct() << "\t" << p->GetProduct()->a << endl << endl;

	p = fact1.Produce("AA1");
	cout << "AA1 Before : " << p << "\t" << p->GetProduct() << "\t" << p->GetProduct()->a << endl;
	p->GetProduct()->a = 15;
	cout << "AA1 After : " << p << "\t" << p->GetProduct() << "\t" << p->GetProduct()->a << endl << endl;
	fact1.Destroy(p);

	p = fact1.Produce("AA2");
	cout << "AA2 Before : " << p << "\t" << p->GetProduct() << "\t" << p->GetProduct()->a << endl;
	p->GetProduct()->a = 20;
	cout << "AA2 After : " << p << "\t" << p->GetProduct() << "\t" << p->GetProduct()->a << endl << endl;

	p = fact1.Produce("AA1");
	cout << "AA1 Before : " << p << "\t" << p->GetProduct() << "\t" << p->GetProduct()->a << endl;
	p->GetProduct()->a = 15;
	cout << "AA1 After : " << p << "\t" << p->GetProduct() << "\t" << p->GetProduct()->a << endl << endl;

}

