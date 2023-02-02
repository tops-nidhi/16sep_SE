#include<iostream>
using namespace std;
class Capsual
{
    int no;
    string nm;
public:
    int getdata()
    {
        cout<<"Enter your id:";
        cin>>no;
        cout<<"Enter your name:";
        cin>>nm;
        return 0;
    }
    int show()
    {
        cout<<"Your id is:"<<no<<" and name is:"<<nm;
        return 0;
    }
};
int main()
{
    Capsual cap;
    cap.getdata();
    cap.show();
    return 0;
}