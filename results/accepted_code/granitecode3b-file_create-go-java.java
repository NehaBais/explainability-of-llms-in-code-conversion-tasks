import java.io.IOException;

public class Main {
  public static void main(String[] args) throws IOException {
    createFile("input.txt");
    createFile("/input.txt");
    createDir("docs");
    createDir("/");
  }

  private static void createFile(String fn) throws IOException {
    java.nio.file.Files.createFile(java.nio.file.Paths.get(fn));
    System.out.println("file " + fn + " created!");
  }

  private static void createDir(String dn) throws IOException {
    java.nio.file.Files.createDirectory(java.nio.file.Paths.get(dn));
    System.out.println("directory " + dn + " created!");
  }
}
