



#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int r=1;r<=n;r++)
    {
        int c=1;
        while(r>=c)
        {
            cout<<"X";
            c+=1;
        }
        cout<<'\n';

    }
}