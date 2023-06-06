#include <iostream>
#include <string>
using namespace std;

class Myclass
{
    public:
        Myclass(string z){
            setname(z);
        }
       void setname(string x){
            name = x;
        }
        string getname(){
            return name;
        }
    private:
        string name;

};

int main()
{
    Myclass Myobject("lucky me");
    cout << Myobject.getname();

    Myobject.setname("Natasha");
    cout << Myobject.getname();

    cout << Myobject.getname();

    Myclass Myobject2("mocha bear");
    cout << Myobject2.getname();

    return 0;
}
