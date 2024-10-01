import java.nio.file.Files;
import java.nio.file.Paths;

public class FileChecker {
  public static void main(String[] args) {
    String cwd = System.getProperty("user.dir"); // current working directory
    String root = "/"; // filesystem root

    for (String file :
        new String[] {
          "input.txt", "docs", cwd + "/input.txt", cwd + "/docs", root + "input.txt", root + "docs"
        }) {
      if (Files.exists(Paths.get(file))) {
        if (Files.isDirectory(Paths.get(file))) {
          System.out.println(file + " is a directory");
        } else {
          System.out.println(file + " is a file");
        }
      } else {
        System.out.println(file + " does not exist");
      }
    }
  }
}
