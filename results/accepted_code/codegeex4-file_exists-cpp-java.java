import java.io.File;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    fileExists("input.txt");
    fileExists("zero_length.txt");
    fileExists("docs/input.txt");
    fileExists("docs/zero_length.txt");

    // for the current working directory
    Path path = Paths.get("");
    fileExists(path.resolve("input.txt").toString());
    fileExists(path.resolve("zero_length.txt").toString());

    // for the filesystem root
    path = Paths.get("/");
    fileExists(path.resolve("input.txt").toString());
    fileExists(path.resolve("zero_length.txt").toString());
  }

  public static void fileExists(String path) {
    File f = new File(path);
    System.out.print(f.getAbsolutePath());

    if (f.exists()) {
      if (f.isDirectory()) {
        System.out.println(" is a directory");
      } else {
        System.out.println(" exists with a file size of " + f.length() + " bytes.");
      }
    } else {
      System.out.println(" does not exist");
    }
  }
}
