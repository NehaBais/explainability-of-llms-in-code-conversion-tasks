import java.io.File;

public class Main {
  public static void main(String[] args) {
    // Check in current working directory
    System.out.println("input.txt is a regular file? " + checkFileOrDir("./input.txt", true));
    System.out.println("docs is a directory? " + checkFileOrDir("./docs", false));

    // Check in root of filesystem
    System.out.println("/input.txt is a regular file? " + checkFileOrDir("/input.txt", true));
    System.out.println("/docs is a directory? " + checkFileOrDir("/docs", false));
  }

  public static String checkFileOrDir(String path, boolean isFile) {
    File f = new File(path);
    if (isFile ? f.isFile() : f.isDirectory()) {
      return "yes";
    } else {
      return "no";
    }
  }
}
