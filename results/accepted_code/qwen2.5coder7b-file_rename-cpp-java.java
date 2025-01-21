import java.io.File;

public class Main {
  public static void main(String[] args) {
    renameFile("input.txt", "output.txt");
    renameDirectory("docs", "mydocs");
    renameFile("/input.txt", "/output.txt");
    renameDirectory("/docs", "/mydocs");
  }

  public static void renameFile(String oldName, String newName) {
    File file = new File(oldName);
    if (file.exists()) {
      boolean success = file.renameTo(new File(newName));
      if (!success) {
        System.out.println("Failed to rename " + oldName + " to " + newName);
      } else {
        System.out.println("Successfully renamed " + oldName + " to " + newName);
      }
    } else {
      System.out.println(oldName + " does not exist.");
    }
  }

  public static void renameDirectory(String oldName, String newName) {
    File directory = new File(oldName);
    if (directory.exists() && directory.isDirectory()) {
      boolean success = directory.renameTo(new File(newName));
      if (!success) {
        System.out.println("Failed to rename " + oldName + " to " + newName);
      } else {
        System.out.println("Successfully renamed " + oldName + " to " + newName);
      }
    } else {
      System.out.println(oldName + " does not exist or is not a directory.");
    }
  }
}
