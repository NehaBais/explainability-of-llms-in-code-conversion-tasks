The equivalent Java code would be:

```java
import java.io.*;

public class Main {
    static void mkdirp(String path) throws IOException {
        File file = new File(path);
        file.getParentFile().mkdirs();
    }

    public static void main(String[] args) throws Exception{
        try {
            mkdirp("/path/to/dir");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
```
This Java code does the same thing as your Python function - it creates a directory if it doesn't already exist, and it works similarly to the POSIX mkdir -p command by creating all parent directories of 'path' that don't already exist. It uses java.io library for file related operations. It has been designed to catch IOException, similar to your python code. The main function here demonstrates how to call this from the main function and print error stack trace if any exception occurs. Please replace "/path/to/dir" with the path you would like to create. 

Note that in Java, paths are typically separated by a forward slash (/) instead of a backslash (\).
