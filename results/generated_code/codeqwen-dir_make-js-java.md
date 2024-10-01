Here's a Java version of your JavaScript code:

```java
import java.io.File;
import java.util.function.Consumer;

public class Main {
    public static void main(String[] args) {
        String path = "./path/to/dir";
        mkdirp(path, System.out::println);
    }

    public static void mkdirp(String p, Consumer<String> cb) {
        File file = new File(p);

        if (!file.exists()) {
            boolean success = file.mkdirs();
            if (success) {
                cb.accept("Directory created");
            } else {
                cb.accept("Failed to create directory: " + p);
            }
        } else {
            cb.accept("Directory already exists");
        }
    }
}
```

In this Java code, `mkdirp` creates the directory and its parent directories if they don't exist. It uses a `Consumer<String>` to provide callback functionality. The Consumer is then used to output the success or failure message back to the console. If the directory already exists, it will print out "Directory already exists".
