import java.io.File;
import java.io.IOException;

public class Main {
  public static void main(String[] args) {
    try {
      create(".", "/");
    } catch (IOException e) {
      errorHandler(e, 1);
    }
  }

  private static void create(String... roots) throws IOException {
    for (String root : roots) {
      File f = new File(root + File.separator + "output.txt");
      File d = new File(root + File.separator + "docs");

      if (!d.exists()) {
        d.mkdir();
      }

      if (!f.createNewFile()) {
        System.out.println("Failed to create a file");
      }
    }
  }

  private static void errorHandler(Exception error, int code) {
    System.err.println("Error: " + error.getMessage());
    System.exit(code);
  }
}
