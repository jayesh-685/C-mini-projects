#include <iostream>
#include <vector>
using namespace std;

void displayMenu();
void printNumbers(const vector <int> numbers);
void addNumber(vector <int> &numbers);
void findMean(const vector <int> numbers);
void findSmallest(const vector <int> numbers);
void findLargest(const vector <int> numbers);

int main() 
{  
    char selection {};
    vector <int> numbers {};
    while (selection != 'q' && selection != 'Q') 
    {
        displayMenu();

        cin >> selection;

        if (selection == 'p' || selection == 'P') 
            printNumbers(numbers);
        else if (selection == 'a' || selection == 'A')
            addNumber(numbers);
        else if (selection == 'm' || selection == 'M')
            findMean(numbers);
        else if (selection == 's' || selection == 'S')
            findSmallest(numbers);
        else if (selection == 'l' || selection == 'L')
            findLargest(numbers);
        else if (selection == 'q' || selection == 'Q')
            cout << "Okay, closing program...\n";
        else 
            cout << "Invalid input, try again\n";

        system("pause");
    }


    return 0; 
}

void displayMenu()
{
    system("cls");
        
    cout << "\nSelect what you want to do from the menu\n\n";
        
    cout << "P - Print numbers\n";
    cout << "A - Add a number to the list\n";
    cout << "M - Display mean of numbers\n";
    cout << "S - Display the smallest number\n";
    cout << "L - Display the largest number\n";
    cout << "Q - Quit Program\n\n";

}

void printNumbers(vector <int> numbers)
{
    if (numbers.size() == 0)
        cout << "[] - The list is empty\n";
    else {
        cout << " [ ";
        for(int number: numbers)
            cout << number << " ";
        cout << "]\n";
    }
}

void addNumber(vector <int> &numbers)
{
    int newNumber;
    cout << "Enter number: ";
    cin >> newNumber;
    numbers.push_back(newNumber);
}

void findMean(const vector <int> numbers)
{
    if (numbers.size() == 0)
        cout << "[] - The list is empty\n";
    else {
        double sum {};
        for(int number: numbers)
            sum += number;
        cout << "Average is " << sum/numbers.size() << ".\n";
    }
}

void findSmallest(const vector <int> numbers)
{
    if (numbers.size() == 0)
        cout << "[] - The list is empty\n";
    else {
        int min = numbers.at(0);
        for(int number: numbers){
            if(number < min)
                min = number;
        }
        cout << "Minimum value is " << min << ".\n";
    }
}

void findLargest(const vector <int> numbers)
{
    if(numbers.size() == 0)
        cout << "[] - The list is empty\n";
    else {
        int max = numbers.at(0);
        for(int number: numbers) {
            if(number > max)
                max = number;
        }
        cout << "Maximum value is " << max << ".\n";
    }
}