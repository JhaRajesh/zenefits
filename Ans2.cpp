#include<bits/stdc++.h>
using namespace std;
int fact(int x)
{
    if(x==0)
        return(0);
    int ans=1;
    for(int i=1;i<=x;i++)
        ans*=i;
    return(ans);
}
int ff(char d[],string s)
{
    vector<int> q(26,0);
    int result=0;
    sort(d,d+s.size());
    for(int i=0;i<s.size();i++)
    {
        q[d[i]]=i;
      //cout<<d[i]<<endl;
    }
    for(int i=0;i<s.size();i++)
    {
        int a1=q[s[i]],a2=fact(s.size()-i-1);
        cout<<a1<<" "<<a2<<" "<<s.size()-i<<endl;
        result+=(a1*a2);
        for(char j='a';j<=s[i];j++)
        {
            if(q[j]>0)
            {
            q[j]--;
            //cout<<q[j]<<" hey"<<endl;
            }
        }
        cout<<result<<endl;
    }
    cout<<result+1<<endl;
    return(result+1);
}
int main()
{
    int n;
    cin>>n;
    char d[n];
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>d[i];
    }
    cin>>s;
    int result=0;
    result=ff(d,s);
    cout<<result<<endl;
    return 0;
}
