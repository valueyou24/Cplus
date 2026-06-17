#include <iostream>
using namespace std;

class Base
{
    public:
     virtual ~Base() = default;
};

class Derived : public Base
{
    public: 
        void show()
        {
            cout << "Derived class method" << endl;
        }
};

int main()
{
    Base* ptr_base = new Derived; // 基类指针指向派类对象

    //将基类指针转换为派生类指针
    Derived* ptr_derived = dynamic_cast<Derived*>(ptr_base);
    if(ptr_derived)
    {
        ptr_derived->show();//成功转换
    }
    else
    {
        cout << "Failed to cast to Derived class" << endl;
    }

}