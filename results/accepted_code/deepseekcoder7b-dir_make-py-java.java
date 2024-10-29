import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    String path = "./path/to/dir"; // replace with your directory path
    mkdirp(path);
  }

  private static void mkdirp(String path) {
    try {
      Files.createDirectories(Paths.get(path));
    } catch (IOException e) {
      System.err.println("Unable to create directories: " + e.getMessage());
    }
  }
}
