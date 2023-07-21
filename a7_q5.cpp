#include <iostream>

using namespace std;

int val(int arr[],int n)
{
int missing=-1;
int sum=0;
for(int i=0;i<n;i++)
{
sum+=arr[i];
}
int range_sum=(n)*(n+1)/2;
missing=range_sum-sum;
return missing;
}
int main() {
    int arr[]={8,6,4,2,3,5,0,1};
    cout<<val(arr,8);
    return 0;
}
