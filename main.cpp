#include<iostream>
#define SIZE 500
using namespace std;

int main(void)
{
    int mat[SIZE][SIZE];
    int a, b, i, j;
    while(cin>>a>>b)
    {
        for(i=0;i<a;i++)
            for(j=0;j<b;j++)
            cin>>mat[i][j];
        for(j=0;j<b;j++)
        {
            for(i=0;i<a;i++)
            {
                if(i==a-1)
                    cout<<mat[i][j];
                else
                    cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
