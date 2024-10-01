Below is the Java equivalent of your Rust code:

```java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        String err = "File move error";

        File file1 = new File("input.txt");
        File file2 = new File("output.txt");
        if (file1.renameTo(file2))
            System.out.println("Move to output.txt completed successfully.");
        else
            System.err.println(err);

        File dir1 = new File("docs");
        File dir2 = new File("mydocs");
        if (dir1.renameTo(dir2))
            System.out.println("Move to mydocs completed successfully.");
        else
            System.err.println(err);

        File file3 = new File("/input.txt");
        File file4 = new File("/output.txt");
        if (file3.renameTo(file4))
            System.out.println("Move /input.txt to /output.txt completed successfully.");
        else
            System.err.println(err);

        File dir3 = new File("/docs");
        File dir4 = new File("/mydocs");
        if (dir3.renameTo(dir4))
            System.out.println("Move /docs to /mydocs completed successfully.");
        else
            System.err.println(err);
    }
}
```

This is how you can achieve the same functionality in Java using `File` class. The function `renameTo()` does the actual renaming operation. If it returns false, it means the rename operation failed. Hence we print an error message to standard error if there was any issue with renaming. Please note that Java does not have a built-in way to check whether a file or directory exists so you would have to implement your own existence checks before calling `renameTo()`. 

Please remember that in Java, the slashes `/` are used for both Unix and Windows systems because Java uses this concept, not just in `File`, but also across the entire language. So it's recommended to stick with it while writing Java code. Also, you should use forward slash (/) to specify directory paths as they are used on Unix. 

Also remember to handle potential exceptions that may occur while performing file or directory manipulations. The `try-catch` block is a good practice in Java.
