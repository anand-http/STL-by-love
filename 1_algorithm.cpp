#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

    // ALGORITHM

    vector<int> v;

    v.push_back(4);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);

    cout << "Finding 7--> " << binary_search(v.begin(), v.end(), 7) << endl;

    cout << "Lower bound--> " << lower_bound(v.begin(), v.end(), 7) - v.begin() << endl;

    cout << "Upper bound--> " << upper_bound(v.begin(), v.end(), 7) - v.begin() << endl;

    int a = 2, b = 5;

    cout << "Max of a and b ---> " << max(a, b) << endl;
    cout << "Min of a and b ---> " << min(a, b) << endl;

    swap(a, b);
    cout << "after swapping a is ---> " << a << " and after swapping b is ---> " << b << endl;

    string c = "hello world";

    reverse(c.begin(), c.end());
    cout << c << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After rotate the element will be \n";

    for (int i : v)
    {
        cout << i << "  ";
    }

    cout << endl;

    sort(v.begin(), v.end());
    for (int i : v)
        cout << i << " ";
    cout << endl;
    return 0;
}