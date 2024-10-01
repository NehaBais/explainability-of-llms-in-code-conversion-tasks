
Here is the Java code that corresponds to the Rust code you provided:
```
import java.io.File;

public class Main {
    public static void main(String[] args) {
        File inputTxt = new File("input.txt");
        File docs = new File("docs");
        File rootInputTxt = new File("/input.txt");
        File rootDocs = new File("/docs");

        if (inputTxt.exists()) {
            System.out.println(inputTxt.getName() + " is a file");
        } else {
            System.out.println(inputTxt.getName() + " does not exist");
        }

        if (docs.exists()) {
            System.out.println(docs.getName() + " is a directory");
        } else {
            System.out.println(docs.getName() + " does not exist");
        }

        if (rootInputTxt.exists()) {
            System.out.println(rootInputTxt.getName() + " is a file");
        } else {
            System.out.println(rootInputTxt.getName() + " does not exist");
        }

        if (rootDocs.exists()) {
            System.out.println(rootDocs.getName() + " is a directory");
        } else {
            System.out.println(rootDocs.getName() + " does not exist");
        }
    }
}
```
This code uses the `java.io.File` class to create instances of files and directories, and then checks whether they exist using the `exists()` method. If a file or directory exists, it is printed as a string with the appropriate message ("is a file" or "is a directory"). If it does not exist, a different message is printed.

Note that in Java, we use `\\` to escape special characters in strings, such as `\n` for a newline character. In this code, we use `\n` to insert a newline between the messages printed to the console.
