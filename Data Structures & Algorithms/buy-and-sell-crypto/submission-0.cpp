class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int ans=0;
       int n=prices.size();

       vector<int> v(n,-1);
       stack<int> st;
       int r=n-1;
       while(r>=0){
        while(!st.empty() && prices[r]>=prices[st.top()]){
           st.pop();
        }
        if(st.empty()){
            st.push(r);
        }
        if(r!=st.top()){
            v[r]=st.top();
        }
        r--;
       }  
       for(int i=0;i<n;i++){
        if(v[i]!=-1){
            ans=max(ans,prices[v[i]]-prices[i]);
        }
       }
       return ans;
    }
};
