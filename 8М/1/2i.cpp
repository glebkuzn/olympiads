#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,d,l,j,h,p;
    cin >> a >> h;
    int A[a];
    for(b=0; b<a; b++)
    {
        A[b]=0;
    }
    for(b=0; b<pow(2,a); b++)
    {
        j=0;
        p=0;
        for(l=0; l<a; l++)
        {
            if(A[l]==1)
            {
                j=j+1;
            }
        }
        for(l=0; l<a; l++)
        {
            if((A[l]==1)&&(A[l+1]==1))
            {
                p=1;
            }
        }

        if((j==h)&&(p==0))
        {
            for(d=0; d<a; d++)
            {
                cout << A[d] << " ";
            }
            cout << endl;
        }
        for(c=a-1; A[c]==1; c--)
            {} A[c]=1;
        for(c=c+1; c<a; c++)
        {
            A[c]=0;
        }
    }
    return 0;
}
