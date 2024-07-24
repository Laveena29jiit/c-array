#include<iostream>
using namespace std;
const int N=100;
int arr[N];
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int ans;
    ans=sum/n;
    cout<<ans;
}
