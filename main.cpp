#include <iostream>
#include <string>
using namespace std;
class hello_world
{
private:
    string print;
public:
    hello_world()
    {
        print = "I'm Accelerator. Hello, World!";
    }
    void out()
    {
        cout << print << endl;
    }
};
int main() {
    hello_world hello;
    hello.out();
    return 0;
}
