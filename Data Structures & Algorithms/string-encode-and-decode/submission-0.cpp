class Solution {
public:

    string encode(vector<string>& strs) {
            string s;
            for(auto x:strs){
               s+=to_string(x.length())+"#"+x;
            }
            return s;
    }

    vector<string> decode(string s) {
                vector<string>v;
                int i=0;
                while(i<s.length()){
                  int j=i;
                  while(s[j]!='#'){
                    j++;
                  }
                  int len=stoi(s.substr(i,j-i));
                  j++;
                  string str=s.substr(j,len);
                      v.push_back(str);
                      i=j+len;
                    }
                return v;
                }
    };
