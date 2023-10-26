#include<iostream>
using namespace std;
int main(){ // Q 4
int n;
cout<<"Enter number of elements : ";
cin>>n;
cout<<"Enter elements of array : ";
int arr[n];
for(int i =0;i<n;i++){
    cin>>arr[i];
}
int num1 =0,num2 =0;
//bubble sort
int a = 1,x =1;
for(int i =0;i<n-1;i++){
    for(int j =0;j<n-i-1;j++){
        if(arr[j+1]<arr[j]) swap(arr[j+1],arr[j]);
    }
    if(a ==1) {num1+=(arr[n-i-1]*x);
                    a =2;}
    else {num2+=(arr[n-i-1]*x);
                a =1,x*=10;  }    

}
if(a ==1) num1+=(arr[0]*x);
                   
else num2+=(arr[0]*x);  

cout<<"Minimum sum is : "<<num1+num2;
}