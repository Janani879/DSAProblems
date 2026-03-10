#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int);
bool isprime(int n)
    {
    bool flag{true};
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
          flag=false;
          break;
          
        }
    }
       return flag;
    }
int main()
{
    int n;
    cin>>n;
    int n1{2};
    int c{0};
    
    while(n1!=n)
    {
        if(isprime(n1))
        {
            c+=1;
            if(c%2!=0)
            {
               cout<<n1<<endl;
               
            }
        } 
        
          
            n1+=1;
        }
    }

    
    
    

    

