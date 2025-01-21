import java.io.File;

public class Main {
  public static void main(String[] args) {
    String sep = File.separator;

    renameFile("input.txt", "output.txt");
    renameFile(sep + "input.txt", sep + "output.txt");

    renameDirectory("docs", "mydocs");
    renameDirectory(sep + "docs", sep + "mydocs");
  }

  public static void renameFile(String oldName, String newName) {
    File file = new File(oldName);
    if (file.exists() && file.isFile()) {
      file.renameTo(new File(newName));
    }
  }

  public static void renameDirectory(String oldName, String newName) {
    File directory = new File(oldName);
    if (directory.exists() && directory.isDirectory()) {
      directory.renameTo(new File(newName));
    }
  }
}
