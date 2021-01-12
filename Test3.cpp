#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() 
{  
    int num = 5;
    const int *pnum = &num;
    num = 6; 

    return 0;
}