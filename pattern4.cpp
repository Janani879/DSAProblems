#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int r=1;r<=n;r++)
    {
        int c=1;
        while(c<=n)
        {
            if(c>=r)
            {
                cout<<"X";
            }
            else
            {
                cout<<" ";
            }
            c+=1;
        }
        cout<<'\n';
    }
}