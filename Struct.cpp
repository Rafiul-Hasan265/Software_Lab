#include<iostream>
using namespace std;

struct teacher
{
   string name;
   int id;
   double salary;
};

int main()
{
    teacher obj1;
    obj1.name = "Mr X";
    obj1.id = 1;
    obj1.salary = 1200;

    cout<<"Name: "<<obj1.name<<endl;
    cout<<"ID: "<<obj1.id<<endl;
    cout<<"Salary: "<<obj1.salary<<endl;
    /*
    for(i=0;i<5;i++)
    {
        if(obj1[i].cgpa > 3.75)
        {
            cout<<obj1[i].id;
        }
    }
    */
}
