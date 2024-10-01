### Solution
#### Java
```java
public class Main{
    
    public static void main(String[] args){
        
        String s1 = "abcd";
        String s2 = "abab";
        String s3 = "ab";
        
        System.out.println("Beginning: "+s1.startsWith(s3));//returns false;
        System.out.println("End:"+s1.endsWith(s3));//returns true;
        int i=0;
        while((i = s2.indexOf(s3,i)) != -1){
            System.out.println("Anywhere: "+ i); 
            i++;
        }
    }
}
```
### Notes on the Solution
`String.startsWith()` and `endsWith()` can be used to check if a string is present at its start or end respectively. `String.indexOf(sub-string)` returns -1 for no match, otherwise position of first occurrence in String (zero based). The third parameter specifies an offset within the string where the search starts.

## Program 2 - Palindrome
### Given a string, determine if it is palindrome or not. A palindromic number or numeral palindrome is a number that remains the same when its digits are reversed. It reads the same backward as forward. (https://en.wikipedia.org/wiki/Palindromic_number)

#include <string>
using namespace std;
string s1="abcd";
//Determining if it is palindrome or not? 
s1==reverse(s1); //return true or false
s1==std::string(s1.rbegin(),s1.rend());//return true or false

### Solution
#### Java

public class Main{
    
    public static void main(String[] args){
        
        String s = "madam";
        System.out.println("Using string builder: "+new StringBuilder(s).reverse().equals(s));//returns true;
        System.out.println("Without using string builder:"+isPalindrome(s));
    }
    
    public static boolean isPalindrome(String s){
        
        int i=0,j=s.length()-1;
        
        while(i<j && s.charAt(i)==s.charAt(j)){
            i++; j--;
        }
        if(i>=j) return true;
        
        else return false;
    }
}

### Notes on the Solution
The method `StringBuilder` in Java has a built-in function called `reverse()` that can be used to reverse an input string. This is not present in C++, so we have written our own logic for reversing strings which uses two indexes - one from beginning and other from end of string.

## Program 3 - Anagram Checker
### Given two strings, determine if they are anagrams or not (i.e., check whether the characters used in both words are same). For example 'Listen' is an anagram for 'Silent'. A word has only alphabets. Use ASCII values of letters to compare them. 

#include <string>
using namespace std;
void anagramChecker(string s1, string s2){
int count[256]={0};//initializing all elements with zero
for (char c : s1)
count[c]++;
for (char c : s2)
count[c]--;
bool isAnagram=true;
for(int i=0;i<256;i++){
if (count[i]!=0){
isAnagram = false;
break;
}
}
std::cout << "Is Anagram:"<<isAnagram << std::endl;
}

### Solution
#### Java

public class Main{
    
    public static void main(String[] args){
        
        String s1="Listen";
        String s2 = "Silent";
        
        if(s1.length()!=s2.length())
            System.out.println("Not anagrams");
            
        else{
            char a[]=s1.toLowerCase().toCharArray();
            char b[]=s2.toLowerCase().toCharArray();
            Arrays.sort(a);
            Arrays.sort(b);
            if(Arrays.equals(a,b)) 
                System.out.println("Anagram");
            
            else{
                System.out.println("Not anagrams");
            }
        }
    }
}

### Notes on the Solution
This problem can be solved in multiple ways - using ASCII value of characters, sorting and comparing or by creating a hash table that stores frequency of occurrence of each character from both strings. The easiest method is to simply check if both lengths are equal and then sort the two arrays (or array lists) and compare them.

