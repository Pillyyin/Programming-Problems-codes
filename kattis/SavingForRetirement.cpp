//要注意整數的情況,第二次才對
# include <bits/stdc++.h>
using namespace std;
int main() {
    float B, Br, Bs, A, As, Ar ; 
    cin >> B >> Br >> Bs >> A >> As ;
    Ar = ((Bs*(Br-B))/As)+A ; //As*(Ar-A) > Bs*(Br-B) find Ar
    if(Ar==(int)Ar){
        cout << Ar+1 ;
    }else{
        cout << ceil(Ar) ;
    }
}
/*
# include <bits/stdc++.h> 
using namespace std; 
int main() { 
    float B, Br, Bs, A, As, Ar ; 
    cin >> B >> Br >> Bs >> A >> As ; 
    Ar = ceil(((Bs*(Br-B))/As)+A) ; //As*(Ar-A) > Bs*(Br-B) find Ar 
    cout << Ar ; 
}
*/