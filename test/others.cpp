#include<iostream>
using namespace std;
int main(){
    int a,i,count,A;
    cin>>a;
    A=a;                                                              //儲存原本的值(a的值會變動)
    for(i=2;i<=a;i++){                                         //質因數從2開始
        count=0;                                                   //每換一個質因數，歸零計數器
        while(a%i==0){
            a=a/i;
            count++;                                               //計算這個質因數有幾次
        }
        if(count==0)                                              //計數器=0，表示沒有這個質因數，直接跳過這次循環
            continue;
        else if(a==1&&count>1||a==A&&count>1)    //最後一個因數有多次
            cout<<i<<"^"<<count;
        else if(a==1||a==A)                             //最後一個因數只有一次
            cout<<i;
        else if(count==1)                                        //中間的因數只有一次
            cout<<i<<" * ";
        else                                                      //中間的因數有多次
            cout<<i<<"^"<<count<<" * ";
    }
}