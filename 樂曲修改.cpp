#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;               //��J���X�ӭ���
    int arr[n]={0};         //�Narr�}�C��l��
    for(int i=0;i<n;i++){
        cin >> arr[i];      //��Jarr���C�@��
    }
    for(int i=3;i<n;i++){
        if(abs(arr[i] - arr[i-1]) >= 5){       //�p�G��i���M��i-1���t�Z�j��ε���5
            int a = arr[i-1], b = arr[i-2], c = arr[i-3];
            arr[i]= a + b+ c;                    //���e�T���������
            arr[i]-=max(a, max(b, c));
            arr[i]-=min(a, min(b, c));
            /*
            arr[i-1], arr[i-2], arr[i-3]
            */
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";            //��Xarr[i]�}�C�A�����H�Ů氵���j
    }
    cout << endl;             //��X��������
}
