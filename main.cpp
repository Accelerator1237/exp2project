#include <iostream>
#include <string>
using namespace std;
class hello_World
{
private:
    string print;
public:
    hello_World()
    {
        print = "I'm Accelerator. Hello, World!";
    }
    void out()
    {
        cout << print << endl;
    }
};
int main() {
    hello_World hello;
    hello.out();
    return 0;
}
