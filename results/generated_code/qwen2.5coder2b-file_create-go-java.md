In Java, the `os` package does not exist and a different set of methods is used for file and directory operations. The `new File(String path)` method was introduced in Java 7, which replaces the need for using `os.Create()`.

Here's the equivalent code in Java:

```java
import java.io.File;

public class Main {
    public static void createFile(String fn) throws Exception {
        try (File file = new File(fn)) {
            if (!file.createNewFile()) {
                throw new Exception("Failed to create file.");
            }
            System.out.println("File " + fn + " created!");
        }
    }

    public static void createDir(String dn) throws Exception {
        File dir = new File(dn);
        if (dir.mkdir()) {
            System.out.println("Directory " + dn + " created!");
        } else {
            throw new Exception("Failed to create directory.");
        }
    }

    public static void main(String[] args) {
        try {
            createFile("output.txt");
            createDir("docs");

            // Check the size of the file
            System.out.println("Size of output.txt: " + new File("output.txt").length());

            // Check the existence of the directory
            System.out.println("Does docs exist? " + new File("docs").exists());
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
```

In this Java code:
- We use try-with-resources to ensure that file and directory streams are closed after they are used.
- We check the size of the created file using `file.length()` and the existence of the directory using `file.exists()`.
- We handle any exceptions that may occur during file creation or directory creation, printing error messages.
