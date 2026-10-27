#include <iostream>
#include <queue>
using namespace std;
int main()
{

    // QUEUE

    queue<string> q;

    q.push("hello");
    q.push("how are you");
    q.push("I am good");

    cout << "First element : " << q.front() << endl;

    cout << "After popping first element will be\n";
    q.pop();

    cout << "First element : " << q.front() << endl;

    cout << "Size of queue is : " << q.size() << endl;

    cout << "Empty or not empty : " << q.empty() << endl;
    return 0;
}