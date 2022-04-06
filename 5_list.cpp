#include <iostream>
#include <list>
using namespace std;
int main()
{

    // LIST

    list<int> l;
    l.push_back(5);
    l.push_back(6);
    l.push_back(9);
    l.push_back(2);

    for (int i : l)
        cout << i << " " << endl;

    cout << "After erase\n";
    l.erase(l.begin());
    for (int i : l)
    {
        cout << i << " " << endl;
    }

    cout << "The size is: " << l.size() << endl;

    list<int> n(l);
    cout << "copying the element of l in n\n";
    for (int i : n)
    {
        cout << i << " " << endl;
    }
    cout << "giving the size of f and initiallize it with 300\n";
    list<int> f(5, 300);
    for (int i : f)
        cout << i << " " << endl;

    return 0;
}