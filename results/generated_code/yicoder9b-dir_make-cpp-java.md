Here is the equivalent Java code for creating a directory and its parents if they do not exist already. This code utilizes java.nio.file package methods: Paths.get(), Files.exists(), and Files.createDirectories():

```java
import java.nio.file.*;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        if (args.length != 1) {
            System.out.println("usage: mkdir <path>");
            return;
        }

        Path pathToCreate = Paths.get(args[0]);
        try {
            if (Files.exists(pathToCreate)) return;
            Files.createDirectories(pathToCreate); 
        } catch (IOException e) {
            System.out.println("couldn't create directory: " + pathToCreate);
            e.printStackTrace();
            return;
        }
    }
}
```
Please note that this code requires a Java Runtime Environment version 7 or later, since the java.nio.file package was added in Java 7.
