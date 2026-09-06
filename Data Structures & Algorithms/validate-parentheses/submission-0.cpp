class Solution {
public:
    bool isValid(string s) {
      stack<int> st;
      int n=s.size();
      st.push(s[0]);
      for(int i=1;i<n;i++){
       if(s[i]==')'){
        if(st.empty() || st.top()!='('){
            return false;
        }else{
            st.pop();
        }
       }
       else if(s[i]=='}'){
        if(st.empty() || st.top()!='{'){
            return false;
        }else{
            st.pop();
        }
       }
       else if(s[i]==']'){
        if(st.empty() || st.top()!='['){
            return false;
        }else{
            st.pop();
        }
       }
       if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
        st.push(s[i]);
       }
      }
          return st.size()==0;
    }
};
