import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    renameInCurrentDir();
    renameAtRoot();
  }

  private static void renameInCurrentDir() {
    try {
      Files.move(Paths.get("input.txt"), Paths.get("output.txt"));
      Files.move(Paths.get("docs"), Paths.get("mydocs"));
    } catch (IOException e) {
      e.printStackTrace();
    }
  }

  private static void renameAtRoot() {
    try {
      Path path1 = Paths.get(System.getenv(""), "input.txt");
      Path path2 = Paths.get(System.getenv(""), "output.txt");
      Files.move(path1, path2);

      Path path3 = Paths.get(System.getenv(""), "docs");
      Path path4 = Paths.get(System.getenv(""), "mydocs");
      Files.move(path3, path4);
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
