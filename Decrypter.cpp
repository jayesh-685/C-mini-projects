#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    string key      {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-= "};
    string alphabet {"1qaz2wsx3edc4rfv5tgb6yhn7ujm8ik9ol0p-=!QAZ@WSX#EDC$RFV%TGB^YHN&UJM*IK(OL)P_+["};

    cout << "Enter your secret message: ";

    string encrypted_message;
    getline(cin, encrypted_message);

    cout << "Decrypted message is :\n";

    for (char c: encrypted_message) 
        cout << key.at(alphabet.find(c));
    
    return 0;
}