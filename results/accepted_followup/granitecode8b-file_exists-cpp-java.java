import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class FileExists {
  public static void main(String[] args) {
    String cwd = System.getProperty("user.dir"); // Get the current working directory
    file_exists(cwd + "/input.txt");
    file_exists(cwd + "/docs");

    String root = "/"; // Path to the filesystem root
    file_exists(root + "input.txt");
    file_exists(root + "docs");
  }

  public static void file_exists(String path) {
    try {
      if (Files.exists(Paths.get(path))) {
        if (Files.isDirectory(Paths.get(path))) {
          System.out.println(path + " is a directory");
        } else {
          long size = Files.size(Paths.get(path));
          System.out.println(path + " exists with a file size of " + size + " bytes.");
        }
      } else {
        System.out.println(path + " does not exist");
      }
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
