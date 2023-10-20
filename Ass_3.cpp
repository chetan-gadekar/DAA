
#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,j,sum;
    cout<<"\n Enter the size of array=";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\n Enter the sum=";
    cin>>sum;
    int flag=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]+a[j+1]==sum)
            {
                flag=1;
                cout<<"true";
                break;
            }
        }
    }
    if(flag==0)
    {
        cout<<"flase";
    }
}

//{3, 34, 4, 12, 5, 2}

// {3, 34, 4, 12, 5, 2}  
// sum = 30
