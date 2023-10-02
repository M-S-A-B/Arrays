#include<iostream>
using namespace std;


int main()
{
int arr[10]={24433,463545,2345563,2455,-255,547897357,98754346,7643378,-34568787,2356789},z=0,s=0;

for(int i=0;i<10;i++){
  if(s<arr[i]){
    s=arr[i];
  }
}

for(int i=0;i<10;i++){
  
  if(z>arr[i]){
    z=arr[i];
  }
}
cout<<"the largest number is :"<<s<<endl;
cout<<"the smallest number is :"<<z<<endl;

}
