import java.io.IOException;
import java.nio.file.FileSystems;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) throws IOException {
    Path path = FileSystems.getDefault().getPath("./path/to/dir");
    if (java.nio.file.Files.exists(path)) {
      System.out.println("Path already exists");
    } else {
      java.nio.file.Files.createDirectories(Paths.get("./path/to/dir"));
      System.out.println("Directory created successfully.");
    }
  }
}
