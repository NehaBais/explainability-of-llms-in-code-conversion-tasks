Below is the equivalent Java code for your given Rust code.

```java
import java.io.File;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) throws Exception {
        if(args.length == 0){
            System.exit(1);
        }

        String fileName = args[0];
        File file = new File(fileName);
        long fileSize = getFileSize(file);

        if(fileSize == -1){
            System.err.println("Error: Invalid file name");
            System.exit(2);
        } else {
            System.out.println("Size of " + fileName + " is " + fileSize + " bytes");
        }
    }

    public static long getFileSize(File file) {
        try {
            return Files.size(file.toPath());
        } catch (Exception e) {
            return -1;
        }
    }
}
```

In the above Java program, we create a new instance of `File` using the given file path and call the `getFileSize()` method to get its size. If an exception is thrown while trying to read the file or if it doesn't exist, `getFileSize()` will return `-1`. Otherwise, it returns the actual size of the file in bytes.

The Java `System.exit(int status)` function is equivalent to Rust's `process::exit(code)`. It terminates the currently running Java Virtual Machine. The argument status can be any integer value, but typically a positive value is used to indicate an abnormal exit and zero for a normal exit.
