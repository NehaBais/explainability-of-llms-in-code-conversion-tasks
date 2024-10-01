import static java.nio.file.Files.exists;

import java.nio.file.*;

public class Main {
  static void fileExists(Path path) throws Exception {
    System.out.print(path);
    if (exists(path)) {
      if (Files.isDirectory(path)) {
        System.out.println(" is a directory");
      } else {
        System.out.println(" exists with a file size of " + Files.size(path) + " bytes.");
      }
    } else {
      System.out.println(" does not exist");
    }
  }

  public static void main(String[] args) throws Exception {
    fileExists(Paths.get("input.txt"));
    fileExists(Paths.get("zero_length.txt"));
    fileExists(Paths.get("docs/input.txt"));
    fileExists(Paths.get("docs/zero_length.txt"));
    // Repeat the process for root directory
    fileExists(Paths.get("/", "input.txt"));
    fileExists(Paths.get("/", "zero_length.txt"));
    fileExists(Paths.get("/", "docs/input.txt"));
    fileExists(Paths.get("/", "docs/zero_length.txt"));
  }
}
