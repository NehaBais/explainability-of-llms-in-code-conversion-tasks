Below is the equivalent Java code for the given C++ code. Note: In Java, we use `equals` method to check if strings are equal, and `length()` method to get string length. We also use `indexOf` method instead of `find` (C++ `find` returns the position where it finds a substring, while Java's `indexOf` does the same job). 

```java
String s1 = "abcd";
String s2 = "abab";
String s3 = "ab";

// Beginning
if(s1.length() >= s3.length()) {
    if (s1.substring(0, s3.length()).equals(s3)) {
        System.out.println("First string starts with second string.");
    } else {
        System.out.println("First string doesn't start with second string.");
    }
} 

// Ending
if(s1.length() >= s3.length()) {
    if (s1.substring(s1.length()-s3.length()).equals(s3)) {
        System.out.println("First string ends with second string.");
    } else {
        System.out.println("First string doesn't end with second string.");
    }
} 

// Anywhere
int loc = s2.indexOf(s3);
while(loc != -1) {
    System.out.println("Found match at index " + loc);
    loc = s2.indexOf(s3, loc+1);
}
```
In the above code, `substring()` method is used to get a substring from original string. It's similar to C++ `substr()`. `indexOf()` method is used for searching occurrences of a string in another string. It returns the index where it finds a substring and -1 when it doesn't find any occurrence. 

Please note that `compare` function is not available in Java (although some versions have this function). Therefore, we had to use substrings from original strings for the given problem statement.

Also, it's worth mentioning that this code has been written with the assumption that the string s2 is always present in string s1. If you want to handle a scenario where s2 could not be found in s1, use `contains()` function of Java instead of `indexOf()`. This function returns true if s2 is found anywhere in s1, and false otherwise.
