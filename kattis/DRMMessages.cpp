# include <bits/stdc++.h>
using namespace std;
int main() {
    string msg ;
    cin >> msg ;

    string front, back ;
    int half = msg.size()/2 ;

    //front
    int rotatevalue = 0 ;
    for(int i=0;i<half;i++){
        rotatevalue += (int)(msg[i]-'A') ;
    }
    for(int i=0;i<half;i++){
       msg[i] = (char)('A' + (msg[i] - 'A' + rotatevalue) % 26);
    }

    //back
    rotatevalue = 0 ;
    for(int i=half;i<msg.size();i++){
        rotatevalue += (int)(msg[i]-'A') ;
    }
    for(int i=half;i<msg.size();i++){
       msg[i] = (char)('A' + (msg[i] - 'A' + rotatevalue) % 26);
    }

    //移動值
    int movevalue = 0 ;
    string newmsg = "";
    for(int i = 0; i < half; i++){
        movevalue = msg[half + i] - 'A';           // back[i] 的值
        newmsg += (char)('A' + (msg[i] - 'A' + movevalue) % 26);  // front[i] + movevalue
    }
    cout << newmsg << "\n";


    return 0 ;
}
