#include<iostream>
#include<cmath>

using namespace std;
int d, k, j, u;
float a, b, c, e, l=0, m=0, r=0;
float *cof=NULL, *fd=NULL, *fn=NULL;

void table(float cof[], float fn[], float fd[])
{  cout << " ==================================================\n";
   cout << " |\t x \t | \t f \t | \t f' \t |\n";
   cout << " ==================================================\n";

   u=(((b-a)/c)+1);

   for ( e=a, k=0; k!=u; e=e+c, k++ )
    {
        for ( j=d; j>=0; j-- )
        {
            fn[j]=cof[j]*pow(e,j);
        }

        for ( j=d; j>=1; j-- )
        {
             fd[j]=j*cof[j]*pow(e,(j-1));
        }

      l=0;
      m=0;

      for ( j=d; j>=0; j-- )
        {
            l=l+fn[j]; m=m+fd[j];
        }

      r=r+pow(l,2);

      cout << " |\t " << e << "\t | \t" << l << "\t | \t" << m << "\t |\n";
    }

   cout << " ==================================================\n\n";
   cout << "RMS energy of f(x) = " << sqrt(r/k) << "\n\n";
}


int main ()
{  cout << "\nEnter the degree of the polynomial: ";
   cin >> d;
   cof=new float [d+1]; fn=new float [d+1]; fd=new float [d+1];
   for ( k=0; k<=d; k++ )
    {
        cout << "Enter Coefficient of x^" << k << ":  ";
        cin >> cof[k];
    }
   cout << "\nPolynomial is :\n";

   cout << "f(x) = ";
   for ( k=d; k>=0; k-- )
    {
        cout << cof[k] << "*(x^" << k << ")";
        if ( k!=0 )
            {
                 cout << " + ";
            }
    }

   cout << "\nDerivative is :\n";
   cout << "f'(x) = ";
   if ( d!=0 )
    {
        for ( k=d; k>=1; k-- )
      {
          cout << k*(cof[k]) << "*(x^" << (k-1) << ")";
          if ( k!=1 )
         {
            cout << " + ";
         }
      }
    }
   else
        {
            cout << "0";
        }
   cout << "\n\nEnter x0, x1 & step : ";
   cin >> a >> b >> c;
   table(cof, fn, fd);

   delete[] cof; delete[] fn; delete[] fd;
   return 0;}
