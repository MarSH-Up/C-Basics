/*

Note: This is a function prototype to swap two N-dimensional Arrays, this particular case use pointers to modify the formal parameter.

By Mario De Los Santos
Open-License. 
*/
#include <iostream>
using namespace std;


int swapMatrix(int *a1, int *a2, int a, int b);
int main()
{
  int x, y=3;
  x=y;
  cout<<"Matrix 3x3: "<<endl;
  int A[x][y];
  int B[x][y];

  cout<<"Matrix A"<<endl;
  for(int i=0;i<x;i++)
    for(int j=0;j<y;j++)
      cin>>A[i][j];

  cout<<"Matrix B"<<endl;
  for(int i=0;i<x;i++)
      for(int j=0;j<y;j++)
        cin>>B[i][j];

  swapMatrix((int*)A, (int*)B, x, y);

  cout<<"Matrix A"<<endl;
  for(int i=0;i<x;i++)
  {
    for(int j=0;j<y;j++)
      cout<<A[i][j];
    cout<<endl;
  }

  cout<<"Matrix B"<<endl;
  for(int i=0;i<x;i++)
  {
    for(int j=0;j<y;j++)
      cout<<B[i][j];
    cout<<endl;
  }
  return 0;
}

int swapMatrix(int *a1, int *a2, int a, int b)
{
  int A[3][3]={0};
  for(int i=0;i<a;i++)
  {
    for(int j=0;j<b;j++)
    {
      A[i][j]=*(a1+i*b+j);
      *(a1+i*b+j) = *(a2+i*b+j);
      *(a2+i*b+j) = A[i][j];
    }
  }
}
