The equivalent code in Java would be:

```java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        File dir = new File("./path/to/dir");
        if (!dir.exists()){
            if(!dir.mkdirs()) {
                System.out.println("Failed to create directory!");
            } else {
                System.out.println("Directory created successfully.");
            }
        } else {
            System.out.println("Directory already exists.");
        }
    }
}
```

This Java code does the same thing as your Rust code: it creates a directory and all its missing parents. If it fails for some reason (for example, if you don't have write permissions), it prints an error message. If everything is fine and the directory was created successfully, it also prints that information.
