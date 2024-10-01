import java.io.*;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) {
    checkFile(Paths.get("input.txt"));
    checkFile(Paths.get("zero_length.txt"));
    checkFile(Paths.get("/docs/input.txt"));
    checkFile(Paths.get("/docs/zero_length.txt"));
  }

  static void checkFile(Path path) {
    try {
      if (Files.exists(path)) {
        if (Files.isDirectory(path)) {
          System.out.println(path + " is a directory");
        } else {
          System.out.println(path + " exists with a file size of " + Files.size(path) + " bytes.");
        }
      } else {
        System.out.println(path + " does not exist");
      }
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
