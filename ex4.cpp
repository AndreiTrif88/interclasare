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
    j=1;
    while (i<=n || j<=m)
        if (a[i]==b[j])
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
        else
            if (a[i]>a[j])
                j++;
            else
                i++;

}
