// 90% test#18 TLE
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    vector<long long> arr(n) ;
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    } 

    int left = 0, right = n-1;

    while(left < right){
        // 找最小值的位置
        int minPos = left ;
        for(int i=left+1;i<=right;i++){
            if(arr[i] < arr[minPos]){
                minPos = i ; 
            }
        }

        // 計算左右兩側總和
        long long leftSum = 0, rightSum = 0;
        for(int i=left;i<minPos;i++){
            leftSum += arr[i] ;
        }

        for(int i=minPos+1;i<=right;i++){
            rightSum += arr[i] ;
        }

        // 選較大的那側，相等選右側
        if(leftSum > rightSum){
            right = minPos - 1 ;
        }else{
            left = minPos + 1 ;
        }
    }

    cout << arr[left] << "\n";

    return 0;
}