class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> results;
        for(int i=1;i<=n;i++){
            if(i%3){
                if(i%5){
                    results.push_back(to_string(i));
                }else{
                    results.push_back("Buzz");
                }
            }else{
                if(i%5){
                    results.push_back("Fizz");
                }else{
                    results.push_back("FizzBuzz");
                }
            }
        }
        return results;
    }
};