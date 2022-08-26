//Name-Naman Kundra
//Roll number-2010990470
//set number-4
//question no-2
#include<stdio.h> 
#include<stdlib.h> 

int getMin(int arr[], int n); 
int getMax(int arr[], int n); 
  

bool areConsecutive(int arr[], int n) 
{ 
  if ( n <  1 ) 
    return false; 
  
  
  int min = getMin(arr, n); 
  
  
  int max = getMax(arr, n); 
  
  
  if (max - min  + 1 == n) 
  { 
      
      bool *visited = (bool *) calloc (n, sizeof(bool)); 
      int i; 
      for (i = 0; i < n; i++) 
      { 
         
         if ( visited[arr[i] - min] != false ) 
           return false; 
  
         
         visited[arr[i] - min] = true; 
      } 
  
      
      return true; 
  } 
  
  return false; 
} 
  

int getMin(int arr[], int n) 
{ 
  int min = arr[0]; 
  for (int i = 1; i < n; i++) 
   if (arr[i] < min) 
     min = arr[i]; 
  return min; 
} 
  
int getMax(int arr[], int n) 
{ 
  int max = arr[0]; 
  for (int i = 1; i < n; i++) 
   if (arr[i] > max) 
     max = arr[i]; 
  return max; 
} 
  

int main() 
{ 
    int arr[]= {4,2,4,3,1}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    if(areConsecutive(arr, n) == true) 
        printf(" Array elements are consecutive "); 
    else
        printf(" Array elements are not consecutive "); 
    getchar(); 
    return 0; 
} 
