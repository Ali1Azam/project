#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;                                                // Declare vector

    cout << "Size of arr: " << arr.size() << endl;

    for (int i = 0; i < 5; i++)
    {                                                              // Assign values to vector
        arr.push_back(i + 1);
    }

    for (auto j = arr.begin(); j < arr.end(); j++)
    {                                                             // Access or print the elements of vector
        cout << *j << " ";
    }

    cout << endl;
    cout << "Size of arr: " << arr.size() << endl;

    arr.pop_back();                                               // Remove the last element of vector

    for (auto j = arr.begin(); j < arr.end(); j++)
    {                                                             // Print vector after removing last element
        cout << *j << " ";
    }

    cout << endl;

    cout << "Size of arr: " << arr.size() << endl;               // Check size of vector after removing last element

    cout << "First element of arr: " << arr[0] << endl;

    cout << "Capacity of Vector: " << arr.capacity() << endl;   // Check capacity of vector
}