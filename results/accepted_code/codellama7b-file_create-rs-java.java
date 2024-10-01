import java.io.*;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    // Create a new empty file called "output.txt" of size 0 bytes and an empty directory called
    // "docs".
    try {
      Files.createFile(Paths.get("output.txt"));
      Files.createDirectory(Paths.get("docs"));
    } catch (IOException e) {
      System.err.println("Error: " + e.getMessage());
      System.exit(1);
    }
  }
}
