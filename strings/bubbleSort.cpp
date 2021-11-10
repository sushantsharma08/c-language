#include<iostream>
using namespace std;
void bubblesort(int a[], int n){
    int x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (a[j]>a[j+1])
            {
                x=a[j];
                a[j]=a[j+1];
                a[j+1]=x;
            }
            
        }
        
    }
    
}
int main(){
    int A[100],n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elements of array :";
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    cout<<"sorted Array : "<<endl;
    bubblesort(A,n);
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}

