#include <iostream>
#include <queue>
using namespace std;
int main()
{

    // PRIORITY QUEUE

    priority_queue<int> max; // max heap

    // min heap

    priority_queue<int, vector<int>, greater<int>> min;

    max.push(3);
    max.push(5);
    max.push(6);

    int n = max.size();
    for (int i = 0; i < n; i++)
    {
        cout << max.top() << " ";
        max.pop();
    }
    cout << endl;
    min.push(5);
    min.push(8);
    min.push(4);
    min.push(6);

    int x = min.size();

    for (int i = 0; i < x; i++)
    {
        cout << min.top() << " ";
        min.pop();
    }
    cout << endl;

    cout << "Empty hai kya element --> " << max.empty() << endl;
    cout << "Empty hai kya element --> " << min.empty() << endl;

    return 0;
}