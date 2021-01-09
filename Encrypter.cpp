#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-= "};
    string key      {"1qaz2wsx3edc4rfv5tgb6yhn7ujm8ik9ol0p-=!QAZ@WSX#EDC$RFV%TGB^YHN&UJM*IK(OL)P_+["};

    cout << "Enter your secret message: ";

    string decrypted_message;
    getline(cin, decrypted_message);

    cout << "Encrypted message is :\n";

    for (char c: decrypted_message) {
        if(alphabet.find(c) == string::npos)
            cout << c;
        else
            cout << key.at(alphabet.find(c));   
    }

    return 0;
}