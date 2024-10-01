import java.io.File;
import java.io.IOException;

public class FileDirectoryCreation {

  public static void createFile(String fn) {
    try {
      File file = new File(fn);
      if (!file.exists()) {
        file.createNewFile();
        System.out.println("file " + fn + " created!");
      }
    } catch (IOException e) {
      e.printStackTrace();
    }
  }

  public static void createDir(String dn) {
    File directory = new File(dn);
    if (!directory.exists()) {
      directory.mkdir();
      System.out.println("directory " + dn + " created!");
    }
  }

  public static void main(String[] args) {
    createFile("input.txt");
    createFile("/input.txt");
    createDir("docs");
    createDir("/docs");
  }
}
