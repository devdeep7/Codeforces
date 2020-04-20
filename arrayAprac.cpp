#include <iostream>
#include <string.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
//
////void sort (long long *arr, int len){
////    int i;
////    int temp;
////    while(len--){
////    for (i=0;i<len;i++){
////        if (arr[i]>arr[i+1]){
////            temp = arr[i];
////            arr[i] = arr[i+1];
////            arr[i+1]=temp;
////        }
////    
////    }
////    }
////}
//
//void sortedDiff (long long *arr, long len){
//    int i;
//    
//    if (len%2==0){
//        for(i=len/2; i<len; i++){
//            cout<<arr[len-i-1]<<" ";
//            cout<<arr[i]<<" ";
//        }
//    }
//    else{
//        cout<<arr[len/2]<<" ";
//        for(i=(len+1)/2; i<len;i++){
//            cout<<arr[len-i-1]<<" ";
//            cout<<arr[i]<<" ";
//        }
//    }
//    cout<<"\n";
//    }
//
////void display(long long *arrptr, long length){ 
////      //Displaying the array
////    int i;
////    for ( i=0; i<length;i++){
////    cout << arrptr[i]<<" ";
////    }
////    cout<<"\n";
////    }
//
//int main(){
//    int num;
//    long long len={0};
//    int i;
//    
//    cin>>num;
//    while(num--){
//    cin>>len;
//    long long arr[len];
//    for (i=0;i<len;i++){
//        cin>>arr[i];
//    }
////        cout<<arr[i];
//    sort(arr, arr+len);
////    display(arr,len);
//    
//    sortedDiff(arr, len);
//    
////    display(arr,len);
//    
//    }
//
//}

int main()
{
long long int a,b,i,n,t;
cin>>t;
while(t--)
{
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
if(n%2)
cout<<a[n/2]<<" ";
for(i=n/2-1;i>=0;i--)
{
cout<<a[n-i-1]<<" "<<a[i]<<" ";
}
cout<<endl;
}
return 0;
}