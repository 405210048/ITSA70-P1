#include<iostream>
#define SIZE 100
using namespace std;

int main(void)
{
    int mat[SIZE][SIZE];
    int a, b, maxx=0;int i, j;
    while(1)
    {
        cin>>a>>b;
        for(i=0;i<a;i++)
            for(j=0;j<b;j++)
            cin>>mat[i][j];
        for(j=0;j<b;j++)
        {
            for(i=0;i<a;i++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }   
}
