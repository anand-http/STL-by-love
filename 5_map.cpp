#include <iostream>
#include <map>
using namespace std;
int main()
{

    // MAP

    map<int, string> m;

    m[1] = "hello";
    m[15] = "Namaste";
    m[2] = "hiii";

    // other way to push element is
    m.insert({6, "how are you"});

    for (auto i : m)
    {
        cout << i.first << "  " << i.second << endl;
    }

    cout << "check that 6 prsent or not\n"
         << m.count(6) << endl;
    ;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Before erase \n";
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << endl;
    cout << endl;
    cout << "After erase\n";
    m.erase(15);
    for (auto i : m)
    {
        cout << i.first << "  " << i.second << endl;
    }

    auto it = m.find(1);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }

    return 0;
}