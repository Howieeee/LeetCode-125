class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string str;
        for(int i=0;i<s.size();i++){
            if(s[i] >= 48 && s[i] <= 57)
                str += s[i];
            if(s[i] >=97 && s[i] <= 122)
                str += s[i];
        }
        
        if(str.size()==0)
            return true;
        
        int left = 0 , right = str.size()-1;
        while(left <= right){
            if(str[left]!=str[right])
                return  false;
            left++;
            right--;
        }
        
        cout << str ;
        
        return true;
    }
};
