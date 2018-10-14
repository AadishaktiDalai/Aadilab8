//c++ program to merge two arrays and find the smallest element of the resultant array
#include <iostream>
using namespace std;

//function to merge the two arrays
void merge(int asd1[] , int asd2[] , int asd3[] , int n1 , int n2){
	int i = 0 , j = 0 , k = 0 ;
	//traverse both the array
	while (i<n1 and j<n2){
		if (asd1[i] < asd2[j])
			asd3[k++] = asd1[i++];
		else
			asd3[k++] = asd2[j++];
	}
	
	//storing the remaining elementof the first array
	while (i < n1)
		asd3[k++] = asd1[i++];

	
	//storing the remaining elementof the second array
	while (j < n2)
		asd3[k++] = asd2[j++];
}


//function to print array asd1
void f1(int asd1[]){
	for (int n = 0 ;n < 5 ; n++){
	cout<<asd1[n]<<" ";}
	}

//function to print array asd2
void f2(int asd2[]){
	for (int n = 0 ;n < 5 ; n++){
	cout<<asd2[n]<<" ";}
	}
// function to find minimum of asd3 array
	int minimum(int asd3[], int n){
		int min=asd3[0];
		for (int k=0; k<n; k++) {
		if(asd3[k]<min){
		min=asd3[k];
		}
		}
  	 return min;
	}
// function to find maximum
	int maximum(int asd3[], int m){
		int max=asd3[0];
		for (int i=0; i<m; i++) {
		if(asd3[i]>max){
		max=asd3[i];
		}
		}
	 return max;
	}	

int main(){
	int asd1[] = {2, 4, 6, 8, 10};
	//determining the number of elements (n1) in the array
	int n1 = sizeof (asd1) / sizeof asd1[0];

	int asd2[] = {1, 3, 5, 7, 9};
	//determining the number of elements (n2) in the array
	int n2 = sizeof (asd2) / sizeof asd2[0];

	
	//calling the function f1 two print array asd1 
	cout<<"The elements in the array asd1 are = ";
	f1(asd1);

	cout<<endl;	

	//calling the function f2 two print array asd2
	cout<<"The elements in the array asd2 are = ";
	f1(asd2);

	cout<<endl;

	//calling the  function to merge the two arrays
	int asd3[n1 + n2];
	merge(asd1 , asd2 , asd3 , n1 , n2);
	cout<<"The resultant array = ";
	for (int i =0 ; i < n1 + n2 ; i++)
		cout<<asd3[i]<<" ";
	
	cout<<endl;

	//printing the minimum element of the array asd3 
	int n;	
	cout<< "The smallest element of the array ="<< minimum(asd3,n)<<endl;

	cout<<endl;

	//printing the maximum element of the array asd3 
	int m;	
	cout<< "The largest element of the array ="<< maximum(asd3,m)<<endl;

	cout<<endl;

return 9;
}





















