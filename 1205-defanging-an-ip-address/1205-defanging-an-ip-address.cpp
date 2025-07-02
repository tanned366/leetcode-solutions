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