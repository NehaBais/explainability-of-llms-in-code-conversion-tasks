import java.io.File;
import java.io.IOException;

public class Main {
  /* Check for regular file */
  static boolean checkReg(String path) {
    File file = new File(path);
    return file.exists() && file.isFile();
  }

  /* Check for directory */
  static boolean checkDir(String path) {
    File file = new File(path);
    return file.exists() && file.isDirectory();
  }

  public static void main(String[] args) throws IOException {
    System.out.println("input.txt is a regular file? " + (checkReg("input.txt") ? "yes" : "no"));
    System.out.println("docs is a directory? " + (checkDir("docs") ? "yes" : "no"));
    System.out.println("/input.txt is a regular file? " + (checkReg("/input.txt") ? "yes" : "no"));
    System.out.println("/docs is a directory? " + (checkDir("/docs") ? "yes" : "no"));
  }
}
