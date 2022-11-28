#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify(Base* p)
{
    A* a;
    B* b;
    C* c;
    if ((a = dynamic_cast<A*>(p)))
        std::cout << "Type is A" << std::endl;
    else if ((b = dynamic_cast<B*>(p)))
        std::cout << "Type is B" << std::endl;
    else if ((c = dynamic_cast<C*>(p)))
        std::cout << "Type is C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        std::cout << "Type is A" << std::endl;
        (void)a;
    }
    catch (std::bad_cast)
    {
    }
    try
    {
        B &b = dynamic_cast<B&>(p);
        std::cout << "Type is B" << std::endl;
        (void)b;
    }
    catch(std::bad_cast)
    {
    }
    try
    {
        C &c = dynamic_cast<C&>(p);
        std::cout << "Type is C" << std::endl;
        (void)c;
    }
    catch(std::bad_cast)
    {
    }
}

Base * generate(void)
{   
   Base * base;
   srand(time(0));
   int x = (rand() % 3 + 1);
   switch (x)
   {
   case 1:
        base = new A();
    break;
   case 2:
        base = new B();
    break;
   case 3:
        base = new C();
    break;
   }
   return base;
}

int main()
{
    Base *b0 = generate();
    Base *b1 = generate();
    identify(b0);
    identify(*b1);
    delete b0;
    delete b1;
    return 0;
}