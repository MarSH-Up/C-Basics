/*
Exercise for the first exam. Laboratorio de Elementos programables II.

Description: (Spanish)
13.	Ejercicio de programación 1: Escribe un programa que pida al usuario llenar dos matrices 5x5, las sume 
y muestre únicamente los índices (2, n+1), (3, n+1) y (4, n+1). Ejemplo (2, 0), (2 ,1), (2, 2), (2, 3), (2, 4). 

This code has no explanation, for this moment the student hasn't done the exam.
*/

#include <iostream>
using namespace std;

int main()
{
  int A[5][5]={0};
  int B[5][5]={0};
  int Sum[5][5]={0};

  cout<<"Matriz A"<<endl;
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++)
    {
      cin>>A[i][j];
      Sum[i][j]=A[i][j];
    }
  }
  cout<<"Matriz B"<<endl;
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++)
    {
      cin>>B[i][j];
      Sum[i][j] += B[i][j];
    }
  }
  cout<<"Matriz suma"<<endl;
  for(int i=2;i<=4;i++)
  {
      for(int j=0;j<5;j++)
      {
        cout<<Sum[i][j]<<" ";
      }
      cout<<endl;
    }
}
