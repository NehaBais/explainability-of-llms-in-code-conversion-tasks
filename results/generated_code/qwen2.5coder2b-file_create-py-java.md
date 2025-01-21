In Java, the `File` class is used to represent file and directories. Here's how you can convert the Python code into Java.

```java
import java.io.File;

public class Main {
    public static void create(String directory) throws Exception {
        File f = new File(directory);

        if (!f.exists()) {
            // Create a new empty file of size 0 bytes
            try (FileOutputStream fos = new FileOutputStream(f, false)) {
                fos.write(new byte[0]);
            }
            
            // Create an empty directory
            f.mkdir();
        } else {
            System.out.println("Directory already exists.");
        }
    }

    public static void main(String[] args) throws Exception {
        create("./"); // current directory
        create("/");
    }
}
```
In the above Java code, we have used `FileOutputStream` to write empty bytes to the file and `mkdir()` method to create a new empty directory. If the directory already exists, it prints out an error message.

Please note that this code assumes that `os.path.join(directory, "output.txt")` is equivalent to using `File.separator`. This assumption should be checked before using this Java code. Also, we are assuming that writing bytes to a file will not throw an IOException.
