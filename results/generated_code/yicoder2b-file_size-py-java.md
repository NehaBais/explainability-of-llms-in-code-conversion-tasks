The equivalent Java code would be:

```java
import java.io.File;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.Files;

public class Main {
    public static void main(String[] args) throws Exception {
        // File in the current working directory
        Path path1 = Paths.get("input.txt");
        long size1 = Files.size(path1);
        System.out.println("Size of input.txt : " + size1+" bytes");

        // File in file system root
        File rootDir = new File("/");
        Path path2 = Paths.get(rootDir.getAbsolutePath(), "input.txt");
        long size2 = Files.size(path2);
        System.out.println("Size of /input.txt : " + size2+" bytes");
    }
}
```
Please replace the absolute path with the relative or absolute path you desire to input.
