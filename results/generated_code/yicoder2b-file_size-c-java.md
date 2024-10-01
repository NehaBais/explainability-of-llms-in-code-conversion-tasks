The equivalent Java code for the given C code is:
```java
import java.io.File;
import java.io.IOException;
import java.util.concurrent.TimeUnit;

public class Main {
    public static void main(String[] args) {
        try {
            File file = new File("input.txt");
            System.out.println(file.exists() ? "Size of input.txt: " + getFileSize(file) : "input.txt doesn't exist");
            
            file = new File("/", "input.txt");
            System.out.println(file.exists() ? "Size of /input.txt: " + getFileSize(file) : "/input.txt doesn't exist");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static long getFileSize(File file) throws IOException{
        return file.exists() ? file.length() : -1;
    }
}
```
This program first checks if the specified files exist in its current working directory and then prints their sizes if they do, otherwise it informs that these files don't exist. It uses `java.io.File` to represent a file and `getAbsolutePath()` method of File object to find out absolute path of a file. Please note that the size is returned in bytes.

You may need to add the `java.io` package at the top of your Java code as it's not imported by default. The other functions such as `stat()`, which perform operations similar to the C version of stat() system call, are not available in Java and thus replaced with a simple check if the file exists or not.
