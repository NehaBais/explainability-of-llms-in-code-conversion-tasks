The equivalent code in Java would be:

```java
import java.io.File;

public class Main {
    static void printFileSize(String filename) {
        try {
            File file = new File(filename);
            long size = file.length();
            System.out.println("Size of file " + filename + " is " + size + " bytes.");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        printFileSize("input.txt");
        printFileSize("/input.txt");
    }
}
```

This Java code does the same thing as your C++ code: it attempts to find and print out the size of a file in the current working directory (input.txt) and the root file system ("/input.txt"). If the file cannot be found, it prints an error message to System.err.
