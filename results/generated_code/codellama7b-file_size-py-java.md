In Java, you can use the `Files` class to get the size of a file. Here's an example of how you can modify the Python code to do the same thing in Java:
```java
import java.nio.file.Paths;
import java.nio.file.Files;

long size = Files.size(Paths.get("input.txt"));
long size = Files.size(Paths.get("/input.txt"));
```
In this code, we use the `Paths.get()` method to create a `Path` object for the file "input.txt" and "/input.txt". We then use the `Files.size()` method to get the size of each file in bytes.

Note that in Java, you can also use the `File` class to get the size of a file, but it's not as straightforward as using the `Files` class. Here's an example of how you can do this:

import java.io.File;

long size = new File("input.txt").length();
long size = new File("/input.txt").length();

In this code, we create a `File` object for the file "input.txt" and "/input.txt". We then use the `length()` method to get the size of each file in bytes.
