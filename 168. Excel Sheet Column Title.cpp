class Solution {
public:
    string convertToTitle(int columnNumber) {
        string str="";
        while(columnNumber)
        {
            str = char(65+((columnNumber-1)%26)) + str;
            columnNumber= (columnNumber-1)/26;
        }
        return str;
    }
};
