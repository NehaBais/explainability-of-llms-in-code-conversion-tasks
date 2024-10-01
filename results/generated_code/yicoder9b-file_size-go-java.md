Here is the equivalent Java code for the given Golang program:

```java
import java.io.File;
import java.util.Date;

public class Main {
    static void printFileSize(String f) {
        File file = new File(f);
        if (file.exists()){
            System.out.println(file.length());
        } else {
            System.out.println("File does not exist");
        }
    }

    public static void main(String[] args) {
        printFileSize("input.txt");
        printFileSize("/input.txt");
    }
}
```

This Java code imports the required `java.io.File` class and uses it to get the size of a file. The method `printFileSize()` takes the name of a file as an argument, creates a File instance with that name, and prints its length (size in bytes) if it exists. If not, it outputs "File does not exist". In the main function, we call this function for files "input.txt" and "/input.txt" in the current directory/root respectively.
