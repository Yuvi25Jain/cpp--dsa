#include <iostream>
using namespace std;

/* a structure is a collection of predefined dataypes like int , float , double etc

strucure help in creating user defined data type.


2. defining structure:
struct person
{
string namr;
int age;
};

person Yuvanshi*/


//example 1:
struct person{
    string name;
    int phonen;
    int age;

};
int main()
{
    //creating a user defined datatype and vairbale

    person pvar;
    pvar.age = 10;
    pvar.name = "Yuvanshi loves Yukti";
    pvar.phonen = 975423;

    cout<<pvar.age<<" "<<pvar.name<<" "<<pvar.phonen<<endl;

  return 0;
}