Here is the Java equivalent of your Python code:

```java
public class Main {
    public static void main(String[] args){
        System.out.println("Does 'abcd' start with 'ab'? " + startsWith("abcd", "ab")); //prints true
        System.out.println("Does 'abcd' end with 'zn'? " + endsWith("abcd", "zn")); //prints false
        System.out.println("Is 'bb' in 'abab'? " + contains("abab", "bb")); //prints false
        System.out.println("Is 'ab' in 'abab'? " + contains("abab", "ab")); //prints true

        int loc = find("abab", "bb"); //returns -1
        if (loc != -1) {
            System.out.println("Location of the match: " + loc);
        }
        loc = find(substring, "ab"); 
        while (loc != -1){
            System.out.println("Match found at location: " + loc);
            loc = find(substring, "ab", loc+1);
        }
    }

    public static boolean startsWith(String str, String substr) {
        return str.startsWith(substr);
    }

    public static boolean endsWith(String str, String substr) {
        return str.endsWith(substr);
    }

    public static boolean contains(String str, String substr) {
        return str.contains(substr);
    }

    public static int find(String str, String substr) {
        return str.indexOf(substr);
    }

    public static int find(String str, String substr, int startIndex) {
        return str.indexOf(substr, startIndex);
    }
}
```
This code takes similar functionality to your Python program. The functions `startsWith`, `endsWith`, `contains`, and `find` are equivalent to the corresponding methods in Java's String class. 

The function `find` has a third parameter which indicates from where in the string to start searching for the substring (similar to Python's `str.find(substr, startIndex)`). The second `find` function calls this with the starting index found by the first one plus one, allowing it to handle multiple occurrences of the substring.
