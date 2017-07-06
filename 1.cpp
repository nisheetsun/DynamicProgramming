#include <bits/stdc++.h>
using namespace std;
typedef long long unsigned int llui;
typedef long long ll;
typedef string str;



#define F1(i,n) for(int i=1;i<n;i++)
#define F0(i,n) for(int i=0;i<n;i++)

#define set0(ar)   memset(ar,0,sizeof ar)
#define vsort(v)   sort(v.begin(),v.end())

int ar[1000];
static int tep[1000];
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //////
    
    int ans(int sum, int i)
    {
        if(i==n)
        {
            return sum;
        }
        else
        {
            
        }
    }
    
    
    
    int cal(int n)
    {
        for(int i=0;i<n;i++)
        {
            tep[i]=ans(tep[i],i);
        }
        return min_element(tep,tep+n);
    }
    
    
    int t;
    cin>>t;
    int n;
    
    while(t--)
    {
        cin>>n;
        
        F0(i,n)
        {
            cin>>a[i];
        }
        
        cout<<calc(n);
        
    }
    return 0;
} 