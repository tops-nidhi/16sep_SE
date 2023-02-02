#include<iostream>
using namespace std;
class Abstract{

    int no;
public:
    Abstract(int n)
    {
        no = n;
    }
    void show()
    {
        cout<<"Value of no is:"<<no;
    }
};
 int main()
{
    Abstract abs(23);
    abs.show();
    return 0;
}
