class Solution {
public:
    string simplifyPath(string path) {
        stack<string> direct;
        for(int i=0;i<path.length();i++){
            if(path[i]!='/'){
                string temp="";
                while(i<path.length()&&path[i]!='/'){
                    temp+=path[i];
                    i++;
                }
                if(temp[0]=='.'&&temp[1]=='.'&&temp.length()==2){
                    if(!direct.empty()){
                        direct.pop();
                    }
                    else
                        continue;
                }
                else if(temp.length()==1&&temp[0]=='.')
                    continue;
                else{
                    direct.push(temp);
                }  
            }
        }
        string ans="";
        if(direct.empty())
            return "/";
        while(!direct.empty()){
            ans='/'+direct.top()+ans;
            direct.pop();
        }
        return ans;
    }
};
