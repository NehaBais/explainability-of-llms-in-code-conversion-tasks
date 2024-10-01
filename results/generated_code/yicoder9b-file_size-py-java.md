In Java you can use java.io.File class to perform operations such as getting the size of a file or directory.
Here's how your Python code could be converted into Java:

```java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        // File in the current working directory
        File file1 = new File("input.txt");
        System.out.println(file1.length()); // Get size of file in bytes

        // File in the root directory
        File file2 = new File("/" + "input.txt");
        System.out.println(file2.length()); // Get size of file in bytes
    }
}
```
Please note that this Java code will only work if a file named `input.txt` exists either at the root directory or in the working directory of your java application, otherwise it'll return 0 for the length (size) which indicates that the file does not exist. The Python and Java codes also have different ways to handle the file size because they represent the sizes differently: bytes versus characters.
