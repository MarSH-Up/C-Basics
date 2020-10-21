/*
Note: This is a way to pass an N-dimensional array as a parameter, but not the only way.

By Mario De Los Santos
Open-License. 
*/

#include <iostream>
using namespace std;

void matrix(int **A,int x, int y);
int main()
{
  int **A; //Full heap memory array
  cout<<"Define x"<<endl;
  int x;
  cin>>x;
  A= new int *[x];
  cout<<"Define Y"<<endl;
  int y;
  cin>>y;
  for(int i=0;i<y;i++)
  {
    A[i] = new int[y];
    cout<<i<<endl;
  }

  matrix(A,x,y);

  cout<<"Display"<<endl;
  for(int i=0;i<3;i++)
    for(int j=0;j<4;j++)
    cout<<A[i][j];

  delete[]A;
}
void matrix(int **A,int x, int y)
{
  cout<<"Fill"<<endl;
  for(int i=0;i<x;i++)
    for(int j=0;j<y;j++)
      cin>>A[i][j];
    cout<<endl;
}
