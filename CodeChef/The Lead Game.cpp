//https://www.codechef.com/problems/TLG
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>

using namespace std;

int main()
{
    int n,i=0,j=0,k=0;
    cin>>n;
    int a[n],b[n],p=0,m=0;
    while(n--){
        cin>>a[i]>>b[i];
        if(i>=1){
            a[i]+=a[i-1];
            b[i]+=b[i-1];
        }
        if(a[i]>b[i]){
            if(p<(a[i]-b[i]))
                p=a[i]-b[i];
        }
        else{
            if(m<(b[i]-a[i]))
                m=b[i]-a[i];
        }


        i++;
    }


    if(p>m)
        cout<<"1 "<<p;
    else
        cout<<"2 "<<m;
    return 0;
}
