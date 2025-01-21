import java.io.File;

public class FileChecker {
  // Check if a file exists and is a regular file
  public static boolean checkReg(String path) {
    File file = new File(path);
    return file.exists() && file.isFile();
  }

  // Check if a directory exists and is a directory
  public static boolean checkDir(String path) {
    File dir = new File(path);
    return dir.exists() && dir.isDirectory();
  }

  public static void main(String[] args) {
    System.out.printf("input.txt is a regular file? %s\n", checkReg("input.txt") ? "yes" : "no");
    System.out.printf("docs is a directory? %s\n", checkDir("docs") ? "yes" : "no");
    System.out.printf("/input.txt is a regular file? %s\n", checkReg("/input.txt") ? "yes" : "no");
    System.out.printf("/docs is a directory? %s\n", checkDir("/docs") ? "yes" : "no");
  }
}
