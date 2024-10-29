import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws Exception {
    for (String path : new String[] {"input.txt", "docs", "/input.txt", "/docs"}) {
      Path p = Paths.get(path);
      if (Files.exists(p)) {
        if (Files.isDirectory(p)) {
          System.out.println(path + " is a directory");
        } else {
          System.out.println(path + " is a file");
        }
      } else {
        System.out.println(path + " does not exist");
      }
    }
  }
}
