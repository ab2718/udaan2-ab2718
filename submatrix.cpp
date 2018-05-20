#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
int m,n;
cin>>m>>n;
int a[100][100];
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>a[i][j];
    }
}

return 0;
}


int sub( int k[100][100],int m,int n)
{
    int p[m][n];
    
    for(int i=0;i<n;i++)
    p[0][i]=k[0][i];
    
    for(int i=0;i<m;i++)
    p[i][0]=k[i][0];
    
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(k[i][j]==1)
            p[i][j]=min(p[i][j-1],min(p[i-1][j],p[i-1][j-1]))+1;
            else
            p[i][j]=0;
        }
    }
    
   int mx=p[0][0];
   int posi=0;
   int posj=0;
   
   for(i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(mx<p[i][j])
           mx=p[i][j];
       }
   }
    
    
return 0;    
}




