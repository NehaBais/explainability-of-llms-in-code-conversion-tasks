import java.io.File;
import java.io.IOException;

public class Main {

  public static void main(String[] args) {
    createFile("input.txt");
    createDir("docs");
  }

  private static void createFile(String fn) {
    try {
      new File(fn).createNewFile();
      System.out.println("file " + fn + " created!");
    } catch (IOException e) {
      e.printStackTrace();
    }
  }

  private static void createDir(String dn) {
    try {
      new File(dn).mkdirs();
      System.out.println("directory " + dn + " created!");
    } catch (Exception e) {
      e.printStackTrace();
    }
  }
}
