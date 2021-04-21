#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;      //比了n年比賽

    int prize=0, time=0;    //prize 等於 總獎金 ; time 等於 獲得該年度最高獎金的次數
    for(int i=0;i<n;i++){
        int Rank;
        cin>>Rank;          //輸入當年排名

        int M=0;            //M為目前最高獎金
        int a[10]={0};
        for(int j=0;j<=9;j++){
            cin>>a[j];      //輸入每個名次對應的成績
            M = max( M, a[j]);  //判斷該年的最高金額
        }

        prize+=a[Rank-1];       //每年獲得的獎金相加

        if(a[Rank-1]==M){       //如果該名次所獲得的獎金 等於 該年的最高的獎金
            time++;        //獲得該年度最高獎金的次數+1
        }
    }


    cout<<prize<<endl<<time;   //輸出 總獎金 獲得該年度最高獎金的次數

    return 0;
}

