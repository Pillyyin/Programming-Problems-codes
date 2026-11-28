//  1. Binary Tree Reconstruction
#include <bits/stdc++.h>
using namespace std ;

int inorder[500001], postorder[500001], pos[600001] ;
bool first ;

void SloveTree(int in_left, int in_right, int post_left, int post_right){
    
    if(in_left > in_right) return ;

    int root = postorder[post_right] ;
    int root_pos = pos[root] ;

    
    if(!first) cout << " " ;
    cout << root ;
    first = false ;

    int left_size = root_pos - in_left ;

    SloveTree(in_left, root_pos - 1, post_left, post_left + left_size - 1) ;    //  left subtree
    SloveTree(root_pos + 1, in_right, post_left + left_size, post_right - 1) ;  //  right subtree
}


int main(){
    freopen("testcase1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);

    int T ;
    cin >> T ;
    while(T--){
        int N ;
        cin >> N ;
        for(int i=0;i<N;i++) cin >> inorder[i] ;        //  inorder
        for(int i=0;i<N;i++) cin >> postorder[i] ;      //  postorder

        
        for(int i=0;i<N;i++) pos[inorder[i]] = i ;      
        
        first = true ;
        SloveTree(0, N - 1, 0, N - 1) ;

        cout << "\n" ;

    }
}