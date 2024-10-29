import java.io.File;

public class Main {
  public static void main(String[] args) {
    // Here
    rename("input.txt", "output.txt");
    rename("docs", "mydocs");

    // In the filesystem root (Assuming current directory is not root,
    // and file or directory exists in root, else exception will occur)
    rename("/input.txt", "/output.txt");
    rename("/docs", "/mydocs");
  }

  private static void rename(String from, String to) {
    File oldFile = new File(from);
    File newFile = new File(to);

    // Move/Rename file
    if (oldFile.renameTo(newFile)) {
      System.out.println("Successfully moved " + from + " to " + to);
    } else {
      System.out.println("Failed to move " + from + " to " + to);
    }
  }
}
