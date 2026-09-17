//  Runtime 0ms(100%), Memory 8.62MB(92.29%)
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        stringstream ss(s) ;
        string word ;
        unordered_map <char, string> st_mp1 ;
        unordered_map <string, char> st_mp2 ;
        bool is_match = true ;

        for(int i=0;i<pattern.size();i++){
            

            // pattern > s
            if(!(ss >> word)) return false ;
            
            if(st_mp1.count(pattern[i])){
                if(word == st_mp1[pattern[i]]){
                    is_match = true ;
                }else{
                    return false ;
                }
            }else{
                if(st_mp2.count(word)){
                    return false ;
                }else{
                    st_mp1.emplace(pattern[i], word) ;
                    st_mp2.emplace(word, pattern[i]) ;
                }
            }

            
        }

        // s > pattern
        if(ss >> word){
            return false ;
        }

        return is_match ;
    }
};

//  Runtime 0ms(100%), Memory 8.79MB(71.17%)
//  Remove one bool variable but Memory worst than first one 
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        stringstream ss(s) ;
        string word ;
        unordered_map <char, string> st_mp1 ;
        unordered_map <string, char> st_mp2 ;

        for(int i=0;i<pattern.size();i++){
            

            // pattern > s
            if(!(ss >> word)) return false ;
            
            if(st_mp1.count(pattern[i])){
                if(word != st_mp1[pattern[i]]){
                    return false ;
                }
            }else{
                if(st_mp2.count(word)){
                    return false ;
                }else{
                    st_mp1.emplace(pattern[i], word) ;
                    st_mp2.emplace(word, pattern[i]) ;
                }
            }

            
        }

        // s > pattern
        if(ss >> word){
            return false ;
        }

        return true ;
    }
};