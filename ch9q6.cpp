#include<iostream>
using namespace std;
#include<process.h>
/////////////////////////////////////////////////

const int limit = 100;

class safearay
{
    private:
    int arr[limit];
    public:
    int& operator [](int n)
    {
        if (n<0 && n>limit)
        {
            cout<<"\n Index is out of bounds ";
            exit(1);
        }
        return arr[n];
    }
};
////////////////////////////////////////////////////

int main()
{
    safearay sf1;
    for(int i=0; i<limit; i++)
    {
        sf1[i]=i*10;
    }
    for(int j=0; j<limit; j++)
    {
        int temp=sf1[j];
        cout<<"\n Element at "<<j+1<<"is : "<<temp;
    }
    return 0;

}
