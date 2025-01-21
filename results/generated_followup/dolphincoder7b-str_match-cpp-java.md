The error occurs because Java does not support implicit class declarations like C++ supports. This is a feature that was only available in preview versions of Java 12, so we need to use the `--enable-preview` flag to enable it before compiling our code. However, this option is removed in Java 16 and later versions.

To fix this issue, we can upgrade to the latest version of Java (15 or higher) where implicit class declarations are supported by default. Alternatively, we can explicitly declare all classes and use them as demonstrated below:

```java
class Main {
    public static void main(String[] args) {
        String s1  = "abcd";
        String s2  = "abab";
        String s3  = "ab";
        
        // Beginning
        if(s1.length() >= s3.length())  {
            if (s1.substring(0, s3.length()).equals(s3))  {
                System.out.println("First string starts with second string.");
            } else  {
                System.out.println("First string doesn't start with second string.");
            }
        }
        
        // Ending
        if(s1.length() >= s3.length())  {
            if (s1.substring(s1.length()-s3.length()).equals(s3))  {
                System.out.println("First string ends with second string.");
            } else  {
                System.out.println("First string doesn't end with second string.");
            }
        }
        
        // Anywhere
        int loc  = s2.indexOf(s3);
        while(loc != -1)  {
            System.out.println("Found match at index " + loc);
            loc  = s2.indexOf(s3, loc+1);
        }
    }
}
```

Please note that we had to declare a class `Main` and a main method (main function). This is because the code does not have an implicit 'main' function. Additionally, since it's a single-file program, we can simply omit the 'class' keyword when declaring classes in Java.
