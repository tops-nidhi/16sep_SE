#include<iostream>
using namespace std;
class Demo
{
private:
    int no;
public:
    int data()
    {
        cout<<"\nEnter the value of no:";
        cin>>no;
        cout<<endl<<"Value of no is:"<<no;
        return 0;
    }
};
int main()
{
    Demo dm;
    // d1.data();
    dm.data();
    return 0;
}