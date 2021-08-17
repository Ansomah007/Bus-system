#include <iostream>

using namespace std;

int main()
{
    int maxCapacity = 50;
    int numPassengers, answer;
    cout<<"Enter the number of passengers";
    cin>> numPassengers;
    if(numPassengers > maxCapacity)
    {
        answer = numPassengers % maxCapacity;
        if (answer == 0)
        {
            cout<<"All buses are full";
        }
        else
        cout<<"The lat bus will have"<<(50 - answer)<<" empty passenger seats left";

    }
    else if (numPassengers <= maxCapacity)
    {
        answer = maxCapacity - numPassengers;
        cout<<"The last bus will have "<<answer <<" empty passenger seats left.\n\n";
    }
    return 0;
}
