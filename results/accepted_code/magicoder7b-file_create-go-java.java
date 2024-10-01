import java.io.*;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws IOException {
    createFile("input.txt");
    createFile("/input.txt");
    createDir("docs");
    createDir("/docs");
  }

  private static void createFile(String fn) throws IOException {
    File file = new File(fn);
    if (!file.exists()) {
      file.createNewFile();
      System.out.println("File " + fn + " created!");
    } else {
      System.out.println("File " + fn + " already exists.");
    }
  }

  private static void createDir(String dn) throws IOException {
    Path path = Paths.get(dn);
    if (!Files.exists(path)) {
      Files.createDirectory(path);
      System.out.println("Directory " + dn + " created!");
    } else {
      System.out.println("Directory " + dn + " already exists.");
    }
  }
}
