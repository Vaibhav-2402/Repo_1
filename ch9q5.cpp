#include<iostream>
using namespace std;
const int LEN = 80;
/////////////////////////////////////////////

class employee //employee class
{
private:
char name[LEN]; //employee name
unsigned long number; //employee number
public:
void getdata()
{
cout << "\n Enter last name: "; cin >> name;
cout << " Enter number: "; cin >> number;
}

void putdata() const
{
cout << "\n Name: " << name;
cout << "\n Number: " << number;
}
};
////////////////////////////////////////////////////////////////

class employee2
{
    private:
    long compen;
    char ch;
    public:
    void get_data()
    {
        cout<<"\n Enter the compensation "; cin>>compen;
        cout<<"\n Enter the period of compensation i.e.(h for hourly similarly w and m) : ";
        cin>>ch;
    }
    void put_data() const
    {
        cout<<"\n Compensation for this employee is "<<compen;
        char l=ch;
        switch(l)
        {
            case 'h':
            cout<<"\n Employee is paid hourly";
            break;
            case 'm':
            cout<<"\n Employee is paid minthly";
            break;
            case 'w':
            cout<<"\n Employee is paid weekly";
            break;
            default:
            cout<<"\n Wrong Input !!!";
            break;
        }
    }

};
////////////////////////////////////////////////////////////////
class manager : public employee, public employee2//management class
{
private:
char title[LEN]; //”vice-president” etc.
double dues; //golf club dues
public:
void getdata()
{
employee::getdata();
cout << " Enter title: "; cin >> title;
cout << " Enter golf club dues: "; cin >> dues;
employee2::get_data();
}
void putdata() const
{
employee::putdata();
cout << "\n Title: "<< title;
cout << "\n Golf club dues: " << dues;
employee2::put_data();
}
};
////////////////////////////////////////////////////////////////
class scientist : public employee, public employee2//scientist class
{
private:
int pubs; //number of publications
public:
void getdata()
{
employee::getdata();
cout << " Enter number of pubs: "; cin >> pubs;
employee2::get_data();
}
void putdata() const
{
employee::putdata();
cout << "\n Number of publications: " << pubs;
employee2::put_data();
}
};
////////////////////////////////////////////////////////////////
class laborer : public employee,public employee2 //laborer class
{
    void get_data()
    {
       employee2::get_data(); 
    }
    void put_data() const
    {
        employee2::put_data();
    }

};
////////////////////////////////////////////////////////////////
int main()
{
manager m1, m2;
scientist s1;
laborer l1;
cout << endl; //get data for several employees
cout << "\nEnter data for manager 1";
m1.getdata();
cout << "\nEnter data for manager 2";
m2.getdata();
cout << "\nEnter data for scientist 1";
s1.getdata();
cout << "\nEnter data for laborer 1";
l1.getdata();
//display data for several employees
cout << "\nData on manager 1";
m1.putdata();
cout << "\nData on manager 2";
m2.putdata();
cout << "\nData on scientist 1";
s1.putdata();
cout << "\nData on laborer 1";
l1.putdata();
cout << endl;
return 0;
}