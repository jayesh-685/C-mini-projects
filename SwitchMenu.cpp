#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    char selection;
    vector <int> numbers {};
    
    do {
        system("cls");
        
        cout << "\nSelect what you want to do from the menu\n\n";
        
        cout << "P - Print numbers\n";
        cout << "A - Add a number to the list\n";
        cout << "M - Display mean of numbers\n";
        cout << "S - Display the smallest number\n";
        cout << "L - Display the largest number\n";
        cout << "Q - Quit Program\n\n";

        cin >> selection;

        switch(selection){
            case 'p' :
            case 'P' : {
                if(numbers.size() == 0)
                    cout << "[] - The list is empty\n";
                else {
                    cout << " [ ";
                    for(int number: numbers)
                        cout << number << " ";
                    cout << "]\n";
                }
                break;
            }

            case 'a' :
            case 'A' : {
                int newNumber;
                cout << "Enter number: ";
                cin >> newNumber;
                numbers.push_back(newNumber);
                break;
            }
                
            case 'm' :
            case 'M' : {
                if(numbers.size() == 0)
                    cout << "[] - The list is empty\n";
                else{
                    double sum {};
                    for(int number: numbers)
                        sum += number;
                    cout << "Average is " << sum/numbers.size() << ".\n";
                    break;
                }
            }
                
            case 's' : 
            case 'S' : {
                if(numbers.size() == 0)
                    cout << "[] - The list is empty\n";
                else {
                    int min = numbers.at(0);
                    for(int number: numbers){
                        if(number < min)
                            min = number;
                    }
                    cout << "Minimum value is " << min << ".\n";
                }
                break;
            }
                
            case 'l' :
            case 'L' : {
                if(numbers.size() == 0)
                    cout << "[] - The list is empty\n";
                else {
                    int max = numbers.at(0);
                    for(int number: numbers){
                        if(number > max)
                            max = number;
                    }
                    cout << "Maximum value is " << max << ".\n";
                }
                break;
            }
                
            case 'q' :
            case 'Q' : {
                cout << "Okay, closing program.\n";
                break;
                
            default :
                cout << "Unknown selection, please try again\n";
                break;
            }         
        }
        system("pause");

    } while (selection != 'q' && selection != 'Q');
    

    return 0;
}