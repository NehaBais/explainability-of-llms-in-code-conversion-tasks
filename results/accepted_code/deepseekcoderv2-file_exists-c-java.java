import java.io.*;

class file {
  public static void main(String[] args) throws Exception {
    System.out.println("input.txt is a regular file? " + isRegularFile("input.txt"));
    System.out.println("/input.txt is a regular file? " + isRegularFile("/input.txt"));
    System.out.println("docs is a directory? " + isDirectory("docs"));
    System.out.println("/docs is a directory? " + isDirectory("/docs"));
  }

  public static boolean isRegularFile(String path) {
    File file = new File(path);
    return file.exists() && file.isFile();
  }

  public static boolean isDirectory(String path) {
    File dir = new File(path);
    return dir.exists() && dir.isDirectory();
  }
}
