import java.io.File;
import java.io.IOException;

public class FileCreator {
  public static void main(String[] args) {
    createDirectory("."); // current directory
    createDirectory("/"); // root directory
  }

  private static void createDirectory(String path) {
    File file = new File(path, "output.txt");
    try {
      if (file.createNewFile()) {
        System.out.println("Created empty file: " + file.getAbsolutePath());
      } else {
        System.out.println("File already exists: " + file.getAbsolutePath());
      }
    } catch (IOException e) {
      e.printStackTrace();
    }

    File docsDir = new File(path, "docs");
    if (docsDir.mkdir()) {
      System.out.println("Created directory: " + docsDir.getAbsolutePath());
    } else {
      System.out.println("Directory already exists: " + docsDir.getAbsolutePath());
    }
  }
}
