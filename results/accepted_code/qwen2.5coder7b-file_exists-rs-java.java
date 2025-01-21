import java.io.File;
import java.nio.file.Files;

public class Main {
  public static void main(String[] args) {
    String[] files = {"input.txt", "docs", "/input.txt", "/docs"};

    for (String file : files) {
      File f = new File(file);

      if (!Files.exists(f.toPath())) {
        System.out.println(file + " does not exist");
        continue;
      }

      if (f.isDirectory()) {
        System.out.println(file + " is a directory");
      } else {
        System.out.println(file + " is a file");
      }
    }
  }
}
