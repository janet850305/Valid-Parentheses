class Solution {
public:
    bool isValid(string s) {
        stack<char> mystack;
            for(int i=0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                mystack.push(s[i]);
                }
            else if(mystack.empty() != true){
                if(s[i] == ')' && mystack.top() == '('){
                    mystack.pop();
                 }
                \]]]43n 
                 else if(s[i] == ']' && mystack.top() == '['){
                    mystack.pop();
                  }
                 else if(s[i] == '}' && mystack.top() == '{'){
                      mystack.pop();
                 }
            }          
            }
             if(mystack.empty() == true){
                 return true;
             }   
            else
                return false;
        }
    
};
