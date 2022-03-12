#include <iostream>

using namespace std;

int main()
{
    int a[100],b[100],n,m,i,j;
    cin>>n;
    cin>>m;
    for(i=1;i<=n;i++)
        cin>>a[i];
        
    for(j=1;j<=m;j++)
        cin>>b[j];
    i=1;
    j=m;
    while (i<=n || j>=1)
        if (a[i]<b[j])
        {
            if (a[i]%2 == 0)
                cout<<a[i] << " ";
            i++;
        }
        else
        {
            if (b[j]%2 == 0)
                cout<<b[j]<< " ";
            j--;
        }
}
