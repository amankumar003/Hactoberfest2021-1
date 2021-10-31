//LINEAR SEARCH

#include <iostream>
using namespace std;

int linearsearch(int a[], int key, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key){
            return i;
        }
            
        
    }
    return -1;
}
int main()
{
    int n, i;
    cout << "Enter the size of array";
    cin >> n;
    int a[n];
    cout << "Enter the elements of array";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cout << "enter the key to be search";
    cin >> key;
    cout << linearsearch(a, key, n) << endl;
    return 0;
}
