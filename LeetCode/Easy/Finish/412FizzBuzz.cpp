//  Runtime 1ms(54.50%), Memory 11.68MB(75.68%)
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer ;
        for(int i=1;i<n+1;i++){
            if(i % 15 == 0 ){
                answer.push_back("FizzBuzz") ;
            }else if(i % 5 == 0 ){
                answer.push_back("Buzz") ;
            }else if(i % 3 == 0 ){
                answer.push_back("Fizz") ;
            }else{
                answer.push_back(to_string(i)) ;
            }
        }

        return answer ;
    }
};