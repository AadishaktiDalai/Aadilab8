//write a program to find sum of all elements of an array. (use function)

#include<iostream>
using namespace std;

//function for printing the elements of the array
void f1(int asd[]){
	for (int n = 0 ;n < 6 ; n++){
	cout<<asd[n]<<endl;}
	}

//function to find the sum of the elements of the array
int f2(int asd[]){
        int sum = 0 , n;
	for(n =0 ; n<6 ; n++){
	sum = sum + asd[n];}
	cout<<sum<<endl;	
	}

//the main function

int main(){

//declaring the array
	int asd[6] = {24, 35 , 12 , 1 , 4 ,19 };

//printing the array
	cout<<"The elements in the array are = "<<endl;
	f1(asd);

	cout<<"********"<<endl;

//finding the sum of all element
	cout << "The sum of all the elements in the array = ";      
	f2(asd);	

return 8;
}
