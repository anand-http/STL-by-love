#include <iostream>
#include <deque>
using namespace std;
int main()
{

    // DEQUE

        deque<int> d;

    d.push_front(4);

    d.push_back(5);

    cout << "element of 1st index\n"
         << d.at(0) << endl;

    cout << "First and second element  is : ";
    for (int i : d)
        cout << i << " " << endl;

    cout << "Before erase the size is: " << d.size() << endl;

    d.erase(d.begin(), d.begin() + 1);

    cout << "After erase the size is: " << d.size() << endl;

    for (int i : d)
        cout << i << endl;

    d.pop_back();
    cout << "After poping back or last element\n";
    for (int i : d)
        cout << i << " " << endl;

    return 0;
}