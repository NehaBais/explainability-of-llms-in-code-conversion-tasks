Here is the equivalent Java code for creating a directory and any missing parent directories.

```java
import java.nio.file.*;
import static java.nio.file.Files.*;
import java.io.IOException;

public class Main {
    static void createDirectory(String dir) throws IOException {
        Path path = Paths.get(dir);
        if (!exists(path)) {
            createDirectories(path);
        } else if (!isDirectory(path)){
            System.err.format("couldn't create directory %s%n", dir);
            System.exit(1);  //or throw an exception 
        }   
    }
    public static void main(String[] args) {
        if (args.length != 1){
            System.err.format("usage: java %s <path>%n", Main.class.getName());
            System.exit(1);  //or throw an exception 
        }   
        try {
            createDirectory(args[0]);
        } catch (IOException e) {
            e.printStackTrace();
           }
    }
}
```
This Java code uses the `java.nio.file` package to create directories. This function can be used in a similar way as in C language, by providing the directory path as an argument. It will create any missing parent directories. If the directory already exists, it won't do anything. If there is a file at the provided path location, it will throw IOException error.
