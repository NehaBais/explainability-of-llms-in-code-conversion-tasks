import java.io.IOException;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws IOException {
    createDirAll("path/to/dir");
  }

  static void createDirAll(String dirPath) {
    Path path = Paths.get(dirPath);
    try {
      Files.createDirectories(path);
    } catch (IOException e) {
      System.out.println("An Error Occured!" + e);
    }
  }
}
