class Solution {
public:
    string defangIPaddr(string address) {
        string result="";
        for(char ch: address){
            if(ch == '.')
                result += "[.]";
            else    
                result += ch;
        }
        return result;
    }
};

class Solution {
public:
    string defangIPaddr(string address) {
        int n=address.size();
        for(int i=0; i<n; i++) {
            if(address[i] == '.') {
                address.replace(i, 1, "[.]");
                n +=2;
                i +=2;
            }
        }
        return address;
    }
};
