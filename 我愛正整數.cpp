#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){            //輸入不限量的數n
        if(n<0){              //如果數n<0，即終止此程式
            break;
        }else{
           cout<<n<<"\n";     //輸出n，換行
        }
    }
}
