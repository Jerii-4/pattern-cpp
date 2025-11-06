#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int hash[100000] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    int maxFreq = 0;
    int maxElement = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] > maxFreq)
        {
            maxFreq = hash[arr[i]];
            maxElement = arr[i];
        }

        else if (hash[arr[i]] == maxFreq && arr[i] < maxElement)
        {
            maxElement = arr[i];
        }
    }

    cout << "Element with highest frequency is: " << maxElement << endl;
    cout << "Its frequency is: " << maxFreq << endl;

    return 0;
}
