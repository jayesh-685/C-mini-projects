#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

double a_penny_doubled_everyday(int n, double p = 0.01);

int main()
{
    double total_amount = a_penny_doubled_everyday(25);

        cout <<  "If I start with a penny and doubled it every day for 25 days, I will have $" << setprecision(10) << total_amount;

    return 0;
}

double a_penny_doubled_everyday(int n, double p) 
{
    if(n == 1)
        return p;
    return 2 * a_penny_doubled_everyday(n-1, p);
}