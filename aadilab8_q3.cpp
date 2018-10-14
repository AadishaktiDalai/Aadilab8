
//C++ program to find k'th smallest element 
#include<iostream> 
#include<algorithm> 
using namespace std; 

//Function to return k'th smallest element in the given array 
	int kthSmallest(int arr[], int n, int k) 
	{ 
		// Sort the given array 
		    sort(arr, arr+n); 
		  
		// Return k'th element in the sorted array 
		    return arr[k-1]; 
	} 


  
	  
//main function
	int main(){
		int arr[] = {11, 3, 5, 17, 20}; 
		int n = sizeof(arr)/sizeof(arr[0]), k ; 
		cout<<"Enter the value of k ";
		cin>>k;
		cout<<endl;
		cout << "K'th smallest element is " <<  kthSmallest(arr, n, k);
		
		cout<<endl;
		
		
return 0; 
} 

















