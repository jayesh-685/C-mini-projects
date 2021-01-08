#include <iostream>
#include <string>
using namespace std;

int main() 
{  
    string str;
    getline(cin, str);

    for (int i=1; i <= str.length(); i++) {
        for(int j=1; j <= str.length()-i; j++)
            cout << " ";
        for(int j=0; j < i; j++)
            cout << str[j];
        for(int j=i-2; j >= 0; j--)
            cout << str[j]; 
        cout << endl;
    }

    return 0; 
}