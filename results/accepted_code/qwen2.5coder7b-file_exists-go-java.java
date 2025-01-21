import java.io.File;
import java.io.IOException;

public class Main {

  public static void main(String[] args) {
    checkFileAndDirectoryStatus("./input.txt");
    checkFileAndDirectoryStatus("/input.txt");
    checkFileAndDirectoryStatus("./docs");
    checkFileAndDirectoryStatus("/docs");
  }

  private static void checkFileAndDirectoryStatus(String path) {
    File file = new File(path);
    try {
      if (file.exists()) {
        if (file.isDirectory()) {
          System.out.println(path + " is a directory");
        } else {
          System.out.println(path + " is a file");
        }
      } else {
        throw new IOException("File or directory does not exist.");
      }
    } catch (IOException e) {
      System.err.println(e.getMessage());
    }
  }
}
