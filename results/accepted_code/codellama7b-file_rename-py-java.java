import java.nio.file.*;
Path input = Paths.get("input.txt");
Path output = Paths.get("output.txt");
Path docs = Paths.get("docs");
Path mydocs = Paths.get("mydocs");

Files.move(input, output);
Files.move(docs, mydocs);