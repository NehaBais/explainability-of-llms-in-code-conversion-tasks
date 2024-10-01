import java.io.File;
import java.util.Arrays;

public class Main {
  private static void printStat(String path) {
    File file = new File(path);
    if (file.exists()) {
      System.out.println(path + (file.isDirectory() ? " is a directory" : " is a file"));
    } else {
      System.out.println(path + " does not exist");
    }
  }

  public static void main(String[] args) {
    // For current working directory and a file/directory in the current directory
    Arrays.asList("input.txt", "docs").forEach(Main::printStat);

    // For filesystem root and a file/directory at the filesystem root
    Arrays.asList("/input.txt", "/docs").forEach(Main::printStat);
  }
}
