import java.io.File;

public class Main {
  public static void main(String[] args) {
    // Rename in current working directory
    renameInDir("input.txt", "output.txt");
    renameInDir("docs", "mydocs");

    // Rename at filesystem root
    renameInDir("/input.txt", "/output.txt");
    renameInDir("/docs", "/mydocs");
  }

  private static void renameInDir(String src, String dest) {
    File source = new File(src);
    File destination = new File(dest);
    if (source.renameTo(destination)) {
      System.out.println("Successfully renamed " + src + " to " + dest);
    } else {
      System.err.println("Failed to rename " + src + " to " + dest);
    }
  }
}
