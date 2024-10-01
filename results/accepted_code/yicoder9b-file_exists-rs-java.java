import static java.nio.file.Files.*;

import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws Exception {
    for (String file : new String[] {"input.txt", "docs", "/input.txt", "/docs"}) {
      if (exists(Paths.get(file))) {
        if (isDirectory(Paths.get(file))) {
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
