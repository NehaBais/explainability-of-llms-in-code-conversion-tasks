import java.nio.file.*;

public class FileExists {
  public static void main(String[] args) {
    fileExists("input.txt");
    fileExists("zero_length.txt");
    fileExists("docs/input.txt");
    fileExists("docs/zero_length.txt");
  }

  public static void fileExists(String pathStr) {
    Path path = Paths.get(pathStr);
    System.out.print(pathStr + " ");
    if (Files.exists(path)) {
      if (Files.isDirectory(path)) {
        System.out.println("is a directory");
      } else {
        try {
          System.out.println("exists with a file size of " + Files.size(path) + " bytes.");
        } catch (Exception e) {
          System.out.println("exists but has no readable content.");
        }
      }
    } else {
      System.out.println("does not exist");
    }
  }
}
