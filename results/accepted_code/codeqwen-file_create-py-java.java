import java.io.*;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {

  public static void main(String[] args) throws IOException {
    createFile("."); // current directory
    createDir("."); // current directory

    createFile("/"); // root directory
    createDir("/"); // root directory
  }

  private static void createFile(String directory) throws IOException {
    Path file = Paths.get(directory, "output.txt");
    Files.write(file, new byte[0]);
  }

  private static void createDir(String directory) throws IOException {
    Path dir = Paths.get(directory, "docs");
    Files.createDirectory(dir);
  }
}
