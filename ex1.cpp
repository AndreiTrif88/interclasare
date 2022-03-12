#include <iostream>

using namespace std;

int main()
{
    int a[100],b[100],n,m,c[100],p=0,i,j;
    cin>>n;
    cin>>m;
    for(i=1;i<=n;i++)
        cin>>a[i];
        
    for(j=1;j<=m;j++)
        cin>>b[j];
    i=1;
    j=1;
    while (i<=n && j<=m)
        if (a[i]<b[j])
        {
            p++;
            c[p]=a[i];
            i++;
        }
        else
        {
            p++;
            c[p]=b[j];
            j++;
        }
    for (i=1;i<=p;i++)
        cout <<c[i]<< " ";
}
