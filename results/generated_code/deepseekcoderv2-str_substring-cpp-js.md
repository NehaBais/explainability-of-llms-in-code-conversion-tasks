#include <iostream>
#include <string>
int main() {
    std::string s = "0123456789";
    int const n = 3;
    int const m = 4;
    char const c = '2';
    std::string const sub = "456";
    //starting from n characters in and of m length;
    if(n < s.size()) {
        for (int i=0; i<m;i++) {
            std::cout << s[n+i];
        }
    } else {
        std::cout << "Not enough" << endl;
    }
    //starting from n characters in, up to the end of the string;
    if(s.size()>0) {
        for (int i=n; i < s.size();i++) {
            std::cout << s[i];
        }
    } else {
        std::cout << "Not enough" << endl;
    }
    //whole string minus the last character;
    if(s.size() > 0) {
        for (int i=0; i < s.size()-1;i++) {
            std::cout << s[i];
        }
    } else {
        std::cout << "Not enough" << endl;
    }
    //starting from a known character within the string and of m length;
    if(s.find(c) != -1 && (s.find(c)+m <= s.size())){
        for(int i = 0; i<m ;i++) {
            std::cout << s[s.find(c) + i];
        }
    } else {
        std::cout << "Not enough" << endl;
    }
    //starting from a known substring within the string and of m length.
    if (s.find(sub)!=-1 && sub.size() >=m ) {
        for(int i = 0; i<m ;i++) {
            std::cout << s[s.find(sub) + i];
        }
    } else {
        std::cout << "Not enough" << endl;
    }
}
