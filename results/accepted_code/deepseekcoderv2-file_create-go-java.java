import java.io.File;
import java.io.IOException;

public class FileCreator {
  public static void main(String[] args) {
    createFile("input.txt");
    createFile("/input.txt");
    createDir("docs");
    createDir("/docs");
  }

  public static void createFile(String fn) {
    try {
      File file = new File(fn);
      if (file.createNewFile()) {
        System.out.println("file " + fn + " created!");
      } else {
        System.out.println("file " + fn + " already exists.");
      }
    } catch (IOException e) {
      System.err.println("Error creating file: " + e.getMessage());
    }
  }

  public static void createDir(String dn) {
    File dir = new File(dn);
    if (dir.mkdir()) {
      System.out.println("directory " + dn + " created!");
    } else {
      System.out.println("directory " + dn + " already exists.");
    }
  }
}
