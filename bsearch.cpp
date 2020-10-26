#include <iostream>
using namespace std;
//assuming array in sorted order
int bsearch(int* a, int i, int j, int k)
{
  int mid=(i+j)/2;
  if(k<a[mid])
  {
    bsearch(a, 0, mid-1, k);
  }
  else if(k>a[mid])
  {
    bsearch(a, mid+1, j, k);
  }
  else
  {
    return mid;
  }
}

int main()
{
  int n,k;
  cout<<"Enter the number of elements: ";
  cin>>n;
  int a[n];
  cout<<"Enter the array elements: ";
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"Enter the element to search: ";
  cin>>k;
  int val=bsearch(a,0,n-1,k);
  cout<<"Element found at index: "<<val<<endl;
}
