class Solution {
public:  
    string predictPartyVictory(string s){
        queue<char>q;
        int rCount=0,dCount=0;
        for(int i=0;i<s.size();i++){
            q.push(s[i]);
            if(s[i]=='R')rCount++;
            else dCount++;
        }
        int rBan=0,dBan=0;
        while(rCount>0&&dCount>0){
            char x=q.front();
            q.pop();
            if(x=='R'){
                if(rBan>0){
                    rBan--;
                    rCount--;
                }else{
                    dBan++;
                    q.push('R');
                }
            }else{
                if(dBan>0){
                    dBan--;
                    dCount--;
                }else{
                    rBan++;
                    q.push('D');
                }
            }
        }
        if(rCount>0)return "Radiant";
        else return "Dire";
    }
};