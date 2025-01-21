import java.io.File;
import java.io.IOException;

public class Main {
  public static void main(String[] args) {
    createFile("output.txt");
    createDir("docs");
  }

  private static void createFile(String fn) {
    File file = new File(fn);
    try {
      if (file.createNewFile()) {
        System.out.println("File " + fn + " created!");
      } else {
        System.out.println(fn + " already exists");
      }
    } catch (IOException e) {
      System.err.println(e.getMessage());
    }
  }

  private static void createDir(String dn) {
    File dir = new File(dn);
    if (dir.mkdirs()) {
      System.out.println("Directory " + dn + " created!");
    } else {
      System.err.println("Could not create directory: " + dn);
    }
  }
}
