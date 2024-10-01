Here is the Java equivalent of your C++ code:

```Java
public class Main {
    public static void main(String[] args) {
        String s1 = "abcd";
        String s2 = "abab";
        String s3 = "ab";

        //Beginning
        if (s1.startsWith(s3)) {
            System.out.println("The first string starts with the second string");
        }

        //End
        if (s1.endsWith(s3)) {
            System.out.println("The first string ends with the second string");
        }

        //Anywhere - returns first index of occurrence, if not found it will return -1
        int loc = s1.indexOf(s3);

        while (loc != -1) {
            System.out.println("The first string contains the second string at location: " + loc);
            loc = s1.indexOf(s3, loc + 1); //Search from next index as previous index is already found
        }
    }
}
```

Note that `startsWith()` and `endsWith()` are more straightforward methods to check if a string starts or ends with another string in Java than using `compare()`. Also, `indexOf()` is used instead of `find()` as it returns the index of first occurrence of substring in the given String. If not found it will return -1.
