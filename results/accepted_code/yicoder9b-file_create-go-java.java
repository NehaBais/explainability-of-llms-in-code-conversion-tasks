import java.io.File;
import java.io.IOException;

public class Main {
  private static void createFile(String fn) throws IOException {
    File file = new File(fn);
    if (file.createNewFile()) {
      System.out.println("File " + fn + " created!");
    } else {
      System.out.println("File already exists.");
    }
  }

  private static void createDir(String dn) {
    File dir = new File(dn);
    if (dir.mkdir()) {
      System.out.println("Directory " + dn + " created!");
    } else {
      System.out.println("Directory already exists or could not be created.");
    }
  }

  public static void main(String[] args) throws IOException {
    createFile("input.txt");
    createFile("/input.txt");
    createDir("docs");
    createDir("/"); // Java does not allow creating directory at filesystem root, it will throw an
    // exception.
  }
}
