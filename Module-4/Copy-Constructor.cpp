#include<iostream>
using namespace std;
class Temp
{
public:
int no;
    Temp()
    {
        cout<<"Enter the value of no:";
        cin>>no;
        cout<<"Value of no is:"<<no;
    }
    Temp(Temp &t1)
    {
        cout<<"\nValue of no is:"<<t1.no;
    }

};
int main()
{
    Temp temp;
    Temp temp1 = temp;

}