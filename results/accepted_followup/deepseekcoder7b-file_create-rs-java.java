import java.io.IOException;
import java.nio.file.*;

public class Main {
  private static final String FILE_NAME = "output.txt";
  private static final String DIR_NAME = "docs";

  public static void main(String[] args) {
    try {
      create(".");
      Files.createDirectories(Paths.get("/", DIR_NAME));
      Files.createFile(Paths.get("/", FILE_NAME));

    } catch (IOException e) {
      errorHandler(e, 1);
    }
  }

  private static void create(String root) throws IOException {
    Path f_path = Paths.get(root, FILE_NAME);
    if (!Files.exists(f_path)) Files.createFile(f_path);

    Path d_path =
        Paths.get(
            root,
            DIR_NAME); // Correction: Removed 's' from `Paths<｜begin▁of▁sentence｜>` to `Paths.get()`
    if (!Files.exists(d_path)) Files.createDirectory(d_path);
  }

  private static void errorHandler(IOException e, int code) {
    System.err.println("Error: " + e.getMessage());
    System.exit(code);
  }
}
