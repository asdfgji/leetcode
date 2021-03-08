#include <iostream>
#include <string>
using namespace std;
    /*类*/

class Box{
    public:
    double length;
    double get(void);
    void set(double len);
};
double Box::get(void)
{
    return length;
}
void Box::set(double len)
{
    length = len;
    cout << "length: " << length << endl;
}




int main()
{
    double len;
    Box Box1;
    cin >> len;
    Box1.set(len);
    Box1.get();
    return 0;
}