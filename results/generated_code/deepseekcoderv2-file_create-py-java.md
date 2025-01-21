 Here's the equivalent Java code to create an empty file called `output.txt` and an empty directory called `docs` in both the current working directory and the filesystem root:

```java
import java.io.File;
import java.io.IOException;

public class FileCreator {
    public static void main(String[] args) {
        createDirectory("."); // current directory
        createDirectory("/"); // root directory
    }

    private static void createDirectory(String path) {
        File file = new File(path, "output.txt");
        try {
            if (file.createNewFile()) {
                System.out.println("Created empty file: " + file.getAbsolutePath());
            } else {
                System.out.println("File already exists: " + file.getAbsolutePath());
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        File docsDir = new File(path, "docs");
        if (docsDir.mkdir()) {
            System.out.println("Created directory: " + docsDir.getAbsolutePath());
        } else {
            System.out.println("Directory already exists: " + docsDir.getAbsolutePath());
        }
    }
}
```

This Java code defines a `FileCreator` class with a static method `createDirectory` that takes a path as an argument and performs the same operations as your Python script: creating an empty file named `output.txt` and an empty directory named `docs`. The method is called twice, once with the current working directory (`"."`) and once with the root directory (`"/"`).
