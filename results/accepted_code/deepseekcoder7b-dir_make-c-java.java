import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    String path = "./path/to/dir"; // replace this with your directory path

    try {
      Files.createDirectories(Paths.get(path));
    } catch (IOException e) {
      System.err.println("Couldn't create directories: " + path);
      e.printStackTrace();
    }
  }
}
