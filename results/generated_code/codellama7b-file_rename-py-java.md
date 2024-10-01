To convert this code from Python to Java, you can use the following statements:
```
import java.nio.file.*;
Path input = Paths.get("input.txt");
Path output = Paths.get("output.txt");
Path docs = Paths.get("docs");
Path mydocs = Paths.get("mydocs");

Files.move(input, output);
Files.move(docs, mydocs);
```
Note that in Java, you need to use the `Paths` class to create a `Path` object, and then use the `Files` class to move the file or directory. Also, note that the `os` module in Python is not available in Java, so you will need to use the Java NIO (Non-Blocking I/O) API instead.
