/*


By Mario De Los Santos
Open-license.
*/

#include <iostream>
using namespace std;

int a=5, b=6, i=0,j=0, n, m, resta=0;
int main()
{

  cout<<"Matriz de 5 x 6 "<<endl;
  cout<<"Ingresa un rango de numeros que contenga 30 numeros pares, comenzando por un numero par" <<endl;
  cout<<"Ejemplo: De 60 a 118" <<endl;
  cout<<"Tu rango sera de " ; cin>>n; cout<< " a "; cin>>m;
  cout<<endl;

  int N[a][b];
  int V[a][b];

  resta = m-n;
  if (resta=58)
  {
    for(i=0;i<a;i++)
    {
      for(j=0;j<b;j++)
      {
        N[i][j]=n;
        n+=2;
        cout<<" "<< N[i][j];
      }
      cout<<endl;
    }
    cout<<"  El producto es: " <<endl;
    for(i=0;i<a;i++)
    {
      for(j=0;j<b;j++)
      {
      V[i][j]= (N[i][j])*3;
      cout<< V[i][j]<<" ";
      }
      cout<<endl;
    }
  }
  else cout<<"Rango inválido";
  return 0;
}
