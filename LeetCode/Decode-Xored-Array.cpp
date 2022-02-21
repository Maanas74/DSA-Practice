// Que Link:-

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> a;
        a.push_back(first);
        
        for(int i=0;i<encoded.size();i++)
        {
            long long int b=first^encoded[i];
            a.push_back(b);
            first=b;
        }
        return a;
    }
};
