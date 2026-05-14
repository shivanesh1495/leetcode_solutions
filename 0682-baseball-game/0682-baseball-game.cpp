class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int f,se;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                f=s.top();
                s.pop();
                se=s.top();
                s.push(f);
                s.push(f+se);                
            }
            else if(operations[i]=="D"){
                s.push(s.top()*2);                         
            }
            else if(operations[i]=="C"){
                s.pop();                
            }
            else{
                s.push(stoi(operations[i]));
            }
        }
        int sum=0;
        while(!s.empty()){
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};