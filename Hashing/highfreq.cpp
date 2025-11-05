#include <iostream>
using namespace std;

int main()
{
    // Input array size
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    // Input array elements
    int arr[100]; // assuming maximum size of 100
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Create hash array to store frequencies
    int hash[100000] = {0}; // large size to handle any number

    // Count frequencies
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    // Find maximum frequency
    int maxFreq = 0;
    int maxElement = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] > maxFreq)
        {
            maxFreq = hash[arr[i]];
            maxElement = arr[i];
        }
        // If same frequency, take smaller element
        else if (hash[arr[i]] == maxFreq && arr[i] < maxElement)
        {
            maxElement = arr[i];
        }
    }

    cout << "Element with highest frequency is: " << maxElement << endl;
    cout << "Its frequency is: " << maxFreq << endl;

    return 0;
}
