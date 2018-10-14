//c++ program to find the largest,smalest,mean,median,element of highest frequencyof the element of an array.

//library

#include <iostream>
#include<algorithm>
using namespace std;
	
// function to find largest
	int largest(int arr[], int n){
		int max=arr[0];
		for (int i=0; i<n; i++) {
		if(arr[i]>max){
		max=arr[i];
		}
		}
  	 return max;
	}

// function to find smallest
	int smallest(int arr[], int n){
		int min=arr[0];
		for (int i=0; i<n; i++) {
		if(arr[i]<min){
		min=arr[i];
		}
		}
	 return min;
	}	
//function to find mean
	float mean(int arr[], int n){
		int sum=0;
		for(int i=0; i<n; i++){
		sum = sum + arr[i];
		}
        return sum;
	}

//function  to find median
        float median(int arr[],int n){
		float med; 
		sort(arr,arr+n);
		// if no.of elements is odd , median = ((n + 1)/2)th value
		if (n%2!=0){
		med= arr[n/2];
		}
		// if no. of elements even , median = (value before median + value 	   	   above median)
		else {
		med= (arr[(n-1)/2] +arr[n/2])/2;
		}
	return med;
	}

//function to find elements with highest frequency of all elements 
	int frequency (int arr[], int n , int k){
		for (int i = 0 ; i < n ; i++){
			arr[arr[i]%k] += k;
		}
		int max = arr[0] , result = 0 ;	
		for (int i =1 ; i<n ; i++){
			if (arr[i] > max){
				max = arr[i];
				result = i; 
			}
		}
	return result;
	}

int main(){
	int n,k; 
	int arr[n];
	cout<<"Enter no. of elements"<< endl;
	cin>>n;
	for (int i=0; i<n; i++) {
	cout<<"Enter"<<i+1<<"th element of an array "<< endl;
	cin>>k;
	arr[i]=k;
	int n = sizeof (arr) / sizeof (arr[0]);
	int k = n + 1;
	
	}
	
	cout<< "The largest element of the array ="<< largest(arr,n)<<endl;
	cout<< "smallest element of the array ="<< smallest(arr,n)<<endl;
	cout<< "mean of the elements of the array ="<< mean(arr,n)<<endl;
	cout<< "median of the elements of the array  ="<< median(arr,n)<<endl;	
	cout<<"Element with highest frequency = "<< frequency(arr,n,k)<<endl;

return 0;
}
