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

    string encrypted_message;
    cout << "Encrypted message is :\n";

    for (char c: decrypted_message) {
        if(alphabet.find(c) == string::npos)
            encrypted_message += c;
        else
            encrypted_message += key.at(alphabet.find(c));   
    }

    cout << encrypted_message << endl << endl;

    decrypted_message.clear();

    for (char c: encrypted_message) {
        if(key.find(c) == string::npos)
            decrypted_message += c;
        else
            decrypted_message += alphabet.at(key.find(c));   
    }

    cout << "Decrypting message..." << endl << "Decrypted message is :\n\n";
    cout << decrypted_message << endl;

    return 0;
}