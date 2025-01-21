Here is the equivalent code in Java:

```java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        File file1 = new File("input.txt");
        File file2 = new File("/input.txt");

        if (file1.exists() && !file1.isDirectory()) {
            System.out.println("Size of input.txt in the current working directory: " + file1.length());
        } else {
            System.out.println("File does not exist or is a directory.");
        }

        if (file2.exists() && !file2.isDirectory()) {
            System.out.println("Size of /input.txt: " + file2.length());
        } else {
            System.out.println("/input.txt does not exist or is a directory.");
        }
    }
}
```
In this Java code, we use the `File` class to represent a file or directory. We then call `exists()` to verify that it exists and `isDirectory()` to check that it's not a directory but a file. If all conditions are met, we call `length()` to get the size of the file in bytes.
