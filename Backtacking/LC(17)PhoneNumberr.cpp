class Solution {
public:
    void solve(vector<string> & ans,string digits,vector<string>&mapping,string output,int index){
        if(index>=digits.length()){
            ans.push_back(output);
            return ;
        }

        int num=digits[index]-'0';
        string value=mapping[num];
        for(int i=0;i<value.length();i++){
           output.push_back(value[i]);
           solve(ans,digits,mapping,output,index+1);
           output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>mapping(10);
        mapping[2]="abc";
        mapping[3]="def";
        mapping[4]="ghi";
        mapping[5]="jkl";
        mapping[6]="mno";
        mapping[7]="pqrs";
        mapping[8]="tuv";
        mapping[9]="wxyz";
        int index=0;
        string output="";
        vector<string> ans;

        if(digits.length()==0){
            return ans;
        }

        solve(ans,digits,mapping,output,index);
        return ans;
        
    }
};