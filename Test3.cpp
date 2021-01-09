#include <iostream>
#include <vector>
using namespace std;

int main() 
{  
    int max = 10, min = 5;
    int *p = nullptr;
    p = &max;
    cout << *p << endl;
    *p = max;
    cout << *p << endl;
    *p = min;
    cout << *p << endl;
    p = &min;
    cout << *p << endl;

    return 0;
}