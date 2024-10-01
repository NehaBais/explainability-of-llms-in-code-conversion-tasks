import java.io.*;
import java.nio.file.*;

public class FileMove {

  public static void main(String[] args) throws IOException {
    // Use the File API for moving files
    File inputFile = new File("input.txt");
    File outputFile = new File("output.txt");
    inputFile.renameTo(outputFile);

    // Use the Files API for moving directories
    Path docsPath = Paths.get("docs");
    Path myDocsPath = Paths.get("mydocs");
    Files.move(docsPath, myDocsPath);

    // Also do it once in the filesystem root
    Path fsRootPath = Paths.get("/");
    Path docsRootPath = fsRootPath.resolve("docs");
    Path myDocsRootPath = fsRootPath.resolve("mydocs");
    Files.move(docsRootPath, myDocsRootPath);
  }
}
