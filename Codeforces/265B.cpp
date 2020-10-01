#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, sum;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sum = 0;
    sum += arr[0];   //climbing the first tree;
    for(int i=0; i<n; i++)
    {
 
        sum += 1;       // 1 sec to eat the fruit;
        if(i != n-1)
        {
            sum += abs(arr[i] - arr[i+1]);
            sum += 1;       //to jump from one tree to another;
        }
    }
    cout<<sum<<endl;
}
