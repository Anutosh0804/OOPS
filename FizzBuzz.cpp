#include<bits/stdc++.h>
using namespace std;

int main(){
    int k=105;
    for(int i=1;i<=k;i++){
        string ans="";
        if(i%3==0)
            ans+="Fizz";
        if(i%5==0)
            ans+="Buzz";
        if(i%7==0)
            ans+="Fuzz";
        else
            if(ans=="")
                ans=to_string(i);
        
        cout<<ans<<endl;
    }
}