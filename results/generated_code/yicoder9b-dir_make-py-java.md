Here is a Java equivalent for your Python function:

In Java there's no direct equivalent to the "mkdir -p" command or library available out-of-the-box. So you have to implement it manually using `java.nio.file` package.
```java
import java.nio.file.*;
import static java.nio.file.LinkOption.NOFOLLOW_LINKS;

public class Main {
    public static void mkdirp(String path) throws java.io.IOException {
        Path dir = Paths.get(path);
        if (!Files.exists(dir, NOFOLLOW_LINKS)){
            Files.createDirectories(dir);
        }
    }   

    public static void main(String[] args) throws java.io.IOException {
        mkdirp("./path/to/dir");  //pass your path here 
    }   
}
```
