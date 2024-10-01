Sure, here is the equivalent Java code for the given C++ code -

```java
public class Main {
    public static void main(String[] args) {
        String s1 = "abcd";
        String s2 = "abab";
        String s3 = "ab";
        //Beginning
        System.out.println((s1.substring(0, s3.length()).equals(s3)));
        //End
        System.out.println((s1.substring(s1.length() - s3.length()).equals(s3)));
        //Anywhere
        int loc = s2.indexOf(s3); 
        if (loc == -1) {
            System.out.println("String not found!");
        } else {
            System.out.println("Location: " + loc);
            System.out.println("Next location: " + (s2.indexOf(s3, loc+1)));  
        }
    }
}
```
This program checks if the first string starts with the second string, ends with the third string, and finds the location of the second string within the first string. If it cannot find any match, it will print "String not found!". This program is case sensitive. If you want to convert this code to a case insensitive version then replace `s1.substring(0, s3.length()).equals(s3)` with `s1.toLowerCase().startsWith(s3.toLowerCase())` and likewise for the ends and anywhere sections.
If there are multiple occurrences of the substring, it will print all the locations.
