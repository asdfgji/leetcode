#include <iostream>
#include <string>
using namespace std;
    /*编译器可以根据自身硬件来选择合适的大小，但是需要满足约束：
    short和int型至少为16位，long型至少为32位，并且short型长度不能超过int型，
    而int型不能超过long型。这即是说各个类型的变量长度是由编译器来决定的，
    而当前主流的编译器中一般是32位机器和64位机器中int型都是4个字节*/
int main()
{
    int myint = 5;
    float myfloat = 5.20;
    double mydouble = 5.23;
    char mychar = 'D';
    bool mybool = true;
    string mystring = "mystring";
    long int mylongint = 124;
    long long int mylonglongint = 1234;

    cout << "int: " << sizeof(myint) << endl;
    cout << "myfloat: " << sizeof(myfloat) << endl;
    cout << "mydouble: " << sizeof(mydouble) << endl;
    cout << "mychar: " << sizeof(mychar) << endl;
    cout << "mybool: " << sizeof(mybool) << endl;
    cout << "mystring: " << sizeof(mystring) << endl;
    cout << "mylongint: " << sizeof(mylongint) << endl;
    cout << "mylonglongint: " << sizeof(mylonglongint) << endl;


    return 0;
}