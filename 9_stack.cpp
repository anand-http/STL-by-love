#include <iostream>
#include <stack>
using namespace std;
int main()
{

     // STACK

     stack<string> s;

     s.push("hello");
     s.push("world");
     s.push("dunia");

     cout << "Top element of stack :\n"
          << s.top() << endl;

     cout << "After poping top element from stack :";
     s.pop();
     cout << "top element of stack :\n"
          << s.top();

     cout << "Size of stack is :\n"
          << s.size() << endl;

     cout << "Empty or not\n"
          << s.empty() << endl;
     return 0;
}