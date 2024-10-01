The following code snippet is the equivalent of your Rust code written in Java:

```java
import java.io.File;

public class Main {

    public static void main(String[] args) {
        for (String file : new String[]{"input.txt", "docs", "/input.txt", "/docs"}) {
            File f = new File(file);
            if (f.exists()) {
                if (f.isDirectory()) {
                    System.out.println(file + " is a directory");
                } else {
                    System.out.println(file + " Is a file");
                }
            } else {
                System.out.println(file + " does not exist");
            }
        }
    }
}
```

This Java code does essentially the same things as your Rust code: it creates an array of Strings representing the paths you are checking, then for each path, it checks if the File object created from that path exists, and then prints out whether it's a directory or a file. If it doesn't exist, it prints out that it does not exist.
