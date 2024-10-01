Sure! Here's the Java code that should accomplish this task:
```
import java.io.*;
import java.util.*;

public class Main {
  public static void main(String[] args) throws IOException {
    // Print size of file "input.txt" in current directory
    System.out.println("Size of file input.txt: ");
    File f = new File("input.txt");
    if (f.exists()) {
      System.out.println(f.length());
    } else {
      System.out.println("File does not exist.");
    }

    // Print size of file "/input.txt" in root directory
    System.out.println("Size of file /input.txt: ");
    f = new File("/input.txt");
    if (f.exists()) {
      System.out.println(f.length());
    } else {
      System.out.println("File does not exist.");
    }
  }
}
```
In this code, we first create a `File` object for the file "input.txt" in the current directory using the constructor `File("input.txt")`. We then use the `exists()` method to check if the file exists and print its size using the `length()` method if it does exist.

We then repeat the same process for the file "/input.txt" in the root directory by creating a new `File` object using the constructor `File("/input.txt")`. We again use the `exists()` method to check if the file exists and print its size using the `length()` method if it does exist.

Note that we're using the `println()` method to print the output, which is similar to how we would print in Go. However, since Java doesn't have a built-in `fmt` package like Go, we use `System.out.println()` instead.
