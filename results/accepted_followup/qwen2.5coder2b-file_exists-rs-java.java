import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    String[] paths = {"input.txt", "docs", "/input.txt", "/docs"};

    for (String path : paths) {
      Path p = Paths.get(path);

      try {
        boolean isDirectory = Files.isDirectory(p);
        if (isDirectory) {
          System.out.println(path + " is a directory");
        } else {
          System.out.println(path + " is a file");
        }
      } catch (IOException e) {
        System.out.println("An error occurred while checking the path: " + e.getMessage());
      }
    }
  }
}
