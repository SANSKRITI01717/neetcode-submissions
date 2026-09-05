class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int l=0;
        int r=0;
        int maxfreq=0;
        int ans=0;
        vector<int>v(26,0);
        while(r<n){
            v[s[r]-'A']++;
            maxfreq=max(maxfreq,v[s[r]-'A']);
            while(l<n && (r-l+1-maxfreq)>k){
                v[s[l]-'A']--;
                l++;
                maxfreq=0;
                for(int i=0;i<26;i++){
                    maxfreq=max(maxfreq,v[i]);
                }
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};
