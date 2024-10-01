import java.io.File;
import java.io.IOException;

public class Main {
  public static void main(String[] args) {
    createFile(new File("output.txt"));
    createFile(new File("/output.txt"));
    createDirectory(new File("docs"));
    createDirectory(new File("/docs"));
  }

  private static void createFile(File file) {
    try {
      if (file.createNewFile()) {
        System.out.println("file " + file.getName() + " created!");
      }
    } catch (IOException e) {
      System.out.println(e.getMessage());
    }
  }

  private static void createDirectory(File directory) {
    if (!directory.exists()) {
      if (directory.mkdir()) {
        System.out.println("directory " + directory.getName() + " created!");
      }
    }
  }
}
