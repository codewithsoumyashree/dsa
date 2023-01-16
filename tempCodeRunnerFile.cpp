#include<iostream>
using namespace std;
class number1
{
    protected:
    int val;
    public:
   void input(int i)
    {
        val = i;
    }
    virtual void display(){}
};

class occt:public number1
{
    public:
    void display()
    {
        cout<<"oct"<<val<<endl;
    }
};

class dect:public number1
{
    public:
    void display()
    {
        cout<<"dect"<<val;
    }
};

class hext:public number1
{
    public:
    void display()
    {
        cout<<"hex"<<val<<endl;
    }
};

int main()
{
    number1 *p;
    occt o;
    dect d;
    hext h;
    p=&d;
    p->input(10);
    p->display();
    p=&o;
    p->input(20);
    p->display();
    p=&h;
    p->input(30);
    p->display();

}
