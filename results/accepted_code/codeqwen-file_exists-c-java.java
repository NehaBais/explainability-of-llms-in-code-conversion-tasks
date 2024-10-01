import java.io.File;

public class Main {
  // Check for regular file.
  private static boolean checkReg(String path) {
    File f = new File(path);
    return f.exists() && f.isFile();
  }

  // Check for directory.
  private static boolean checkDir(String path) {
    File d = new File(path);
    return d.exists() && d.isDirectory();
  }

  public static void main(String[] args) {
    System.out.println("input.txt is a regular file? " + checkReg("input.txt"));
    System.out.println("docs is a directory? " + checkDir("docs"));
    System.out.println("/input.txt is a regular file? " + checkReg("/input.txt"));
    System.out.println("/docs Is a directory? " + checkDir("/docs"));
  }
}
