import java.io.File;

public class Main {
  public static void main(String[] args) {
    renameFile("input.txt", "output.txt");
    renameDirectory("docs", "mydocs");
    renameFile("/input.txt", "/output.txt");
    renameDirectory("/docs", "/mydocs");
  }

  private static void renameFile(String oldName, String newName) {
    File oldFile = new File(oldName);
    File newFile = new File(newName);

    if (oldFile.exists()) {
      oldFile.renameTo(newFile);
    } else {
      System.out.println("The file " + oldName + " does not exist.");
    }
  }

  private static void renameDirectory(String oldName, String newName) {
    File oldDir = new File(oldName);
    File newDir = new File(newName);

    if (oldDir.exists() && oldDir.isDirectory()) {
      oldDir.renameTo(newDir);
    } else {
      System.out.println("The directory " + oldName + " does not exist or it is not a directory.");
    }
  }
}
