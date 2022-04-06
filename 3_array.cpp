#include <iostream>
#include <array>
using namespace std;
int main()
{

    // ARRAY

    int arr[3] = {1, 3, 5};

    array<int, 5> a = {1, 3, 4, 5, 6};

    int size = a.size();
    cout << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Element of 2nd index--> " << a.at(2) << endl;

    cout << "Empty or not " << a.empty() << endl;

    cout << "First element of array--> " << a.front() << endl;

    cout << "Last element of array--> " << a.back() << endl;
    return 0;
}