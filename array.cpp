#include<iostream>
using namespace std;


int main()
{
int arr[10]={1,2,3,4,5,6,7,8,9,10},z,s=0;
cout<<"Enter the character to search:"<<endl;
cin>>z;
for(int i=0;i<10;i++){
  if(arr[i]==z){
      s++;
  }
}
if(s==1){
     cout<<"The number is present in the array";
  }
  else{
    cout<<"The number is not present in the array";
  }
}
