import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.attribute.BasicFileAttributes;

public class FileSizeChecker {
  public static void main(String[] args) {
    try {
      // Check the size of input.txt in the current working directory
      Path path1 = Paths.get("input.txt");
      BasicFileAttributes attrs1 = Files.readAttributes(path1, BasicFileAttributes.class);
      long size1 = attrs1.size();
      System.out.println(size1);

      // Check the size of input.txt in the root directory
      Path path2 = Paths.get("/input.txt");
      if (Files.exists(path2)) {
        BasicFileAttributes attrs2 = Files.readAttributes(path2, BasicFileAttributes.class);
        long size2 = attrs2.size();
        System.out.println(size2);
      } else {
        System.out.println("File does not exist in the root directory.");
      }
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
