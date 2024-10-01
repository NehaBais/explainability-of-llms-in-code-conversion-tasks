import java.io.IOException;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws IOException {
    String[] paths = {"input.txt", "docs", "/input.txt", "/docs"};

    for (String path : paths) {
      try {
        Path filePath = Paths.get(path);
        if (Files.isDirectory(filePath)) {
          System.out.println(path + " is a directory");
        } else if (Files.isRegularFile(filePath)) {
          System.out.println(path + " is a file");
        } else {
          throw new NoSuchFileException(path);
        }
      } catch (NoSuchFileException e) {
        System.out.println(path + " does not exist");
      }
    }
  }
}
