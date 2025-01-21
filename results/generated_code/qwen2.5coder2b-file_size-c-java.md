The equivalent code in Java would be:

```java
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        try {
            // File size of input.txt in current directory
            long size1 = new java.io.File("input.txt").length();
            System.out.println("Size of input.txt in current directory: " + size1);

            // File size of /input.txt in file system root
            long size2 = new java.io.File("/input.txt").length();
            System.out.println("Size of /input.txt in file system root: " + size2);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
```

Here, I have used the `java.io.File` class to get the file size for both input.txt and /input.txt. The method `length()` of this class returns the size of the file in bytes.
The `java.io.IOException` is caught to handle any potential issues with the files (like file not found or permission issues). If an exception occurs, it prints the stack trace to help debug the error.
