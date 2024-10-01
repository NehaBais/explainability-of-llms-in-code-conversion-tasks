import java.io.*;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws IOException {
    printStat("input.txt");
    printStat("/input.txt");
    printStat("docs");
    printStat("/docs");
  }

  public static void printStat(String p) throws IOException {
    Path path = Paths.get(p);

    if (!Files.exists(path)) {
      System.out.println(p + " does not exist.");
    } else if (Files.isDirectory(path)) {
      System.out.println(p + " is a directory");
    } else {
      System.out.println(p + " is a file");
    }
  }
}
