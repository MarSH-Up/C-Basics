/*


This code has no explanation, at this moment the students haven't done the exam.
By Mario De Los Santos
Open-license
*/
#include <iostream>
using namespace std;

int main()
{
  int a=5, b=6, i=0,j=0, n, m, resta=0;
  cout<<"Add a range: "<<endl;
  cin>>n;
  cin>>m;
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
        n+=2;//pairs
        cout<<" "<< N[i][j];
      }
      cout<<endl;
    }
    cout<<"Product" <<endl;
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
  else cout<<"Invalid range";
  return 0;
}
