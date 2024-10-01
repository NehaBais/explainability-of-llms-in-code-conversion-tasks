Sure, the equivalent Java code would be:

```java
public class Main {
    public static void main(String[] args) throws Exception {
        // Rename file "input.txt" to "output.txt" in current directory and filesystem root
        if (new File("input.txt").renameTo(new File("output.txt"))) {
            System.out.println("File renamed successfully from input.txt to output.txt");
        } else {
            System.out.println("Failed to rename file from input.txt to output.txt");
        }

        // Rename directory "docs" to "mydocs" in current directory and filesystem root
        if (new File("docs").renameTo(new File("mydocs"))) {
            System.out.println("Directory renamed successfully from docs to mydocs");
        } else {
            System.out.println("Failed to rename directory from docs to mydocs");
        }
    }
}
```
This Java code does essentially the same operations as in the C code but with more modern file manipulation methods provided by java.io package. It also throws exception if renaming fails due to permissions or other issues.
