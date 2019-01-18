class Solution {
public:
    // 自己没有实现出来
    int lengthOfLongestSubstring(string s) {
        // 此处的vector相当于一个哈希表，存储256个ASCII字符出现的最新位置索引
        // 初始化为-1有利于计算max_len
        vector<int> dict(256,-1);
        int max_len = 0, len= s.length();
        // 字符出现的默认起始位置
        int start = -1;
        for(int i = 0; i < len; i++)
        {   
            // 如果遇到重复出现的字符
            // 则start的位置变成重复的那个字符之前出现的位置
            if(dict[s[i]] > start)
                start = dict[s[i]];
            //cout<<s[i]<<"##"<<max_len<<"## "<<start<<endl;
            // i是当前的位置，start是字符上次出现的位置
            max_len = max(max_len, i - start);
            // 更新字符的位置
            dict[s[i]] = i;
        }
        return max_len;
    }
    
};