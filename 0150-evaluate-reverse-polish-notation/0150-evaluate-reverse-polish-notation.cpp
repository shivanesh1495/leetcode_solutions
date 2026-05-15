class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int t;
        stack<int> s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"){
                t=s.top();
                s.pop();
                t+=s.top();
                s.pop();
                s.push(t);                
            }
            else if(tokens[i]=="-"){
                t=s.top();
                s.pop();
                t=s.top()-t;
                s.pop();
                s.push(t);                
            }
            else if(tokens[i]=="*"){
                t=s.top();
                s.pop();
                t=t*s.top();
                s.pop();
                s.push(t);                
            }
            else if(tokens[i]=="/"){
                t=s.top();
                s.pop();
                t=s.top()/t;
                s.pop();
                s.push(t);                
            }
            else{
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};