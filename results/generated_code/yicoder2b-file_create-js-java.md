The equivalent Java code for the given JavaScript code would be: 

```java
import java.io.*;

public class Main {
    static void fct(Exception err) {
        if (err != null) System.out.println(err);
    }

    public static void main(String[] args) {
        try {
            File file = new File("output.txt");
            if (file.createNewFile()) {
                System.out.println("Output file created successfully");
            } else {
                fct(new Exception("Failed to create output file"));
            } 

            File dir = new File("docs");
            dir.mkdir();
        } catch (Exception e) {
            fct(e);
        }
    }
}
```

This Java code accomplishes the same task as your JavaScript code: creating "output.txt" in the current working directory and "docs" in the filesystem root, each with an empty file of zero bytes size. The exception handling serves to print errors if any occur during these actions.
