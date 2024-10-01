The equivalent code in Java would be:

```java
import java.io.File;

public class Main {
    static void printStat(String path) {
        File file = new File(path);
        if (file.exists()) {
            if (file.isDirectory()) {
                System.out.println(path + " is a directory");
            } else {
                System.out.println(path + " Is a file");
            }
        } else {
            System.out.println(path + " does not exist");
        }
    }

    public static void main(String[] args) {
        printStat("input.txt");
        printStat("/input.txt");
        printStat("docs");
        printStat("/docs");
    }
}
```

This Java program does the same job as the Go code you posted, it verifies whether a file and directory exists. The `File` object is used to represent files and directories in Java. The `exists()` method checks if the specified pathname represents an existing entity or not.
