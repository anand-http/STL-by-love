#include <iostream>
#include <set>
using namespace std;
int main()
{

    // SET

    set<int> s;

    s.insert(6);

    s.insert(7);

    s.insert(5);
    s.insert(2);

    for (auto i : s)
        cout << i << " ";

    cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (auto i : s)
        cout
            << i << " ";

    cout << endl;

    cout << "count is use to check the element is present or not \n"
         << s.count(7);
    cout << endl;

    set<int>::iterator itr = s.find(2);

    for (auto it = itr; it != s.end(); it++)

    {
        cout << *it << " ";
    }

    cout << endl;
    return 0;
}