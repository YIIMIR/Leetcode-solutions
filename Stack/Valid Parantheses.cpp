class Solution {
public:
    bool isValid(string s) {
        stack<char> par;
        unordered_map <char,char> sis={
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for(char p : s){
        
            if (p=='(' || p== '[' || p == '{')
                par.push(p);
            else{
                if(par.empty())
                    return false;
                if (par.top()!=sis[p]){
                    return false;
                }
                par.pop();
            }
        }
        
        if(par.empty())
            return true;
        
        else 
            return false;

    }    
};