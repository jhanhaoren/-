#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;               //輸入有幾個音符
    int arr[n]={0};         //將arr陣列初始化
    for(int i=0;i<n;i++){
        cin >> arr[i];      //輸入arr的每一項
    }
    for(int i=3;i<n;i++){
        if(abs(arr[i] - arr[i-1]) >= 5){       //如果第i項和第i-1項差距大於或等於5
            int a = arr[i-1], b = arr[i-2], c = arr[i-3];
            arr[i]= a + b+ c;                    //取前三項的中位數
            arr[i]-=max(a, max(b, c));
            arr[i]-=min(a, min(b, c));
            /*
            arr[i-1], arr[i-2], arr[i-3]
            */
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";            //輸出arr[i]陣列，中間以空格做間隔
    }
    cout << endl;             //輸出結束換行
}
