#include<iostream>
using namespace std;
class sum
{
    int a,b,c;
    public:
    void set_data(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void show_data()
    {
        cout<<a<<b<<c<<endl;
    }
    int add()
    {
        return (a+b+c);
    }
};
int main()
{
    sum ob;
    ob.set_data(5,10,20);
    ob.show_data();
    cout<<ob.add();
}
