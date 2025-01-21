Here is the equivalent Java code for your C code:

```java
import java.io.File;

public class Main {

    public static void main(String[] args) {
        File file1 = new File("input.txt");
        File file2 = new File("/input.txt");

        if (file1.exists()) {
            System.out.println(file1.getName() + " size: " + file1.length());
        } else {
            System.out.println(file1.getName() + " does not exist.");
        }

        if (file2.exists()) {
            System.out.println(file2.getName() + " size: " + file2.length());
        } else {
            System.out.println(file2.getName() + " does not exist.");
        }
    }
}
```

This Java code checks if the files "input.txt" in the current directory and "/input.txt" in the root directory exist. If they do, it prints their sizes, otherwise, it tells you that the file doesn't exist. Please make sure that you have the appropriate permissions to read these files, as reading a file may fail if you don't have the necessary rights.
