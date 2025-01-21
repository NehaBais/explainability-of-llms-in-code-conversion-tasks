import java.io.File;
import java.nio.file.Files;

public class Main {
  public static void main(String[] args) {
    // Check if input.txt exists in the current working directory
    File currentDirFile = new File("input.txt");
    if (currentDirFile.exists()) {
      try {
        long sizeCurrent = Files.size(currentDirFile.toPath());
        System.out.println("Size of input.txt in current directory: " + sizeCurrent);
      } catch (Exception e) {
        System.err.println("Error reading file size: " + e.getMessage());
      }
    } else {
      System.out.println("input.txt not found in the current directory.");
    }

    // Check if /input.txt exists in the file system root
    File rootFile = new File("/input.txt");
    if (rootFile.exists()) {
      try {
        long sizeRoot = Files.size(rootFile.toPath());
        System.out.println("Size of /input.txt: " + sizeRoot);
      } catch (Exception e) {
        System.err.println("Error reading file size: " + e.getMessage());
      }
    } else {
      System.out.println("/input.txt not found in the file system root.");
    }
  }
}
