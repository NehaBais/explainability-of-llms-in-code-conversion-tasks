The equivalent code in Java would be:

```java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        File file1 = new File("input.txt");
        long size1 = file1.length();

        File file2 = new File("/input.txt");
        long size2 = file2.length();

        System.out.println("Size of input.txt in the current working directory: " + size1 + " bytes.");
        System.out.println("Size of /input.txt in the root directory: " + size2 + " bytes.");
    }
}
```

This Java code creates a `File` object for each file, gets its length (which is equivalent to the size), and then prints it out.
