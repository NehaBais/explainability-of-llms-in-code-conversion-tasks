import java.io.File;

public class Main {
  public static void main(String[] args) {
    renameFileOrDir(new File("input.txt"), "output.txt");
    renameFileOrDir(new File("docs"), "mydocs");

    renameFileOrDir(
        new File(System.getProperty("file.separator") + "input.txt"),
        System.getProperty("file.separator") + "output.txt");
    renameFileOrDir(
        new File(System.getProperty("file.separator") + "docs"),
        System.getProperty("file.separator") + "mydocs");
  }

  private static void renameFileOrDir(File original, String newName) {
    File renamed = new File(original.getParent(), newName);
    if (!original.renameTo(renamed)) {
      System.err.println("Failed to rename " + original + " to " + newName);
    }
  }
}
