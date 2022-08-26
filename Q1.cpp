//Name-Naman Kundra
//Roll number-2010990470
//set number-4
//question no-1
#include <iostream>
#include <unordered_set>
using namespace std;
 

int findMinIndex(int arr[], int n)
{
    int minIndex = n;
 
    
    unordered_set<int> set;
 
    
    for (int i = n - 1; i >= 0; i--)
    {
        
        if (set.find(arr[i]) != set.end()) {
            minIndex = i;
        }
        
        else {
            set.insert(arr[i]);
        }
    }
 
    
    if (minIndex == n) {
        cout<<"invalid input";
    }
 
    
    return minIndex;
}
 
int main()
{
	int m;
	
	cout<<"enter number of elements";
	cin>>m;
	cout<<m;
    int arr[m];
    int i;



  
  for (int i = 0; i < m; ++i) {
    cin >> arr[i];
  }




   
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    int minIndex = findMinIndex(arr, n);
 
    if (minIndex != n) {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
    else {
        cout << "";
    }
 
    return 0;
}