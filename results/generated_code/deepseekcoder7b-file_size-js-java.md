Java does not have a built-in way to interact with the file system in the same way that JavaScript does. However, you can accomplish this by using java.io package methods which are part of Java standard library. Here is how you could do it:

```java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        File file1 = new File("input.txt");  // in the current directory
        System.out.println(file1.length());   // returns size of input.txt located in current working directory
        
        File file2 = new File("c:\\input.txt");  // in root directory
        System.out.println(file2.length());      // returns size of input.txt located in C:\ drive
    }
}
```
This code does not use active X objects like the JavaScript example did. Instead, it directly accesses files using `File` class from java's standard library. The method length() gives us the size of the file (in bytes).

