/*
Note: This is a way to pass an N-dimensional array as a parameter, but not the only way.
The main idea is this example is uses pointers so the students can get involved with them.

By Mario De Los Santos
Open-License. 
*/
#include <iostream>
using namespace std;
//Prototype fuctions
void fill(int *arr, int a, int b);
void display(int *arr, int a, int b);
int main()
{
  //Size definition
  int x, y;
  cout<<"Sizee"<<endl;
  cin>>x;
  y=x; //nxn matrix

  //Declaring Matrix
  int A[x][y];
  int B[x][y];
  
  //Calling functions
  fill((int*)A, x, y);
  display((int*)A, x, y);

  //Testing the parameter passing
  for(int i=0;i<x;i++)
  {
    for(int j=0;j<y;j++)
      cout<<A[i][j]<<" ";
    cout<<endl;
  }
  return 0;
}
//Formal Functions
void fill(int *arr, int a, int b)//pointer, size, size
{
  for(int i=0;i<a;i++)
  {
    for(int j=0;j<b;j++)
      cin>>*(arr+i*b+j);
  }
}
void display(int *arr, int a, int b)//pointer, size, size
{
  cout<<"From display"<<endl;
  for(int i=0;i<a;i++)
  {
    for(int j=0;j<b;j++)
      cout<<*(arr+i*b+j)<<" ";
    cout<<endl;
  }
}
