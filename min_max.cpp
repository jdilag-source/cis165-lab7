#include <iostream>
using namespace std;

int main()
{
    const int SENTINEL = -99;
    int value;

    cout << "Enter integers one at a time. Enter -99 to stop.\n";
    cout << "Enter a value: ";
    cin >> value;

    // If the first entry is the sentinel, there is no data to report
    if (value == SENTINEL)
    {
        cout << "No data values were entered.\n";
        return 0;
    }

    // Start both extrema from the first real data value
    int largest = value;
    int smallest = value;

    cout << "Enter a value: ";
    cin >> value;

    while (value != SENTINEL)
    {
        if (value > largest)
        {
            largest = value;
        }
        if (value < smallest)
        {
            smallest = value;
        }
        cout << "Enter a value: ";
        cin >> value;
    }

    cout << "Largest value: " << largest << "\n";
    cout << "Smallest value: " << smallest << "\n";

    return 0;
}
