class Solution {
public:
    string intToRoman(int num) {
         vector<int> in={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> rohan={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string str="";
        for(int i=0;i<in.size();i++){
            int k=num/in[i];
            num =num%in[i];
           // cout<<i<<" : "<<k<<" : "<<num<<endl;
            for(int j=0;j<k;j++){
               str+=rohan[i];
                //cout<<str<<endl;
            }
        }
        return str;
    }
};
