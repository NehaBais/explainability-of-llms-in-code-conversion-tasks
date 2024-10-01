import java.io.File;

public class FileRenamer {
  public static void main(String[] args) {
    try {
      // Rename "input.txt" to "output.txt" in the current working directory
      rename("input.txt", "output.txt");
      System.out.println("Renamed 'input.txt' to 'output.txt'.");

      // Rename "docs" to "mydocs" in the current working directory
      rename("docs", "mydocs");
      System.out.println("Renamed 'docs' to 'mydocs'.");

      // Rename "/input.txt" to "/output.txt" in the filesystem root
      rename("/input.txt", "/output.txt");
      System.out.println("Renamed '/input.txt' to '/output.txt'.");

      // Rename "/docs" to "/mydocs" in the filesystem root
      rename("/docs", "/mydocs");
      System.out.println("Renamed '/docs' to '/mydocs'.");
    } catch (Exception e) {
      System.err.println("Error occurred during renaming: " + e.getMessage());
    }
  }

  public static void rename(String oldName, String newName) throws Exception {
    File oldFile = new File(oldName);
    if (!oldFile.exists()) {
      throw new Exception("File does not exist: " + oldName);
    }
    if (newName.contains("/")) {
      // Rename in the filesystem root
      renameInRootDirectory(oldName, newName);
    } else {
      // Rename in the current working directory
      renameInCurrentWorkingDirectory(oldName, newName);
    }
  }

  public static void renameInCurrentWorkingDirectory(String oldName, String newName)
      throws Exception {
    File oldFile = new File(oldName);
    if (!oldFile.exists()) {
      throw new Exception("File does not exist: " + oldName);
    }
    File newFile = new File(newName);
    if (newFile.exists()) {
      throw new Exception("File already exists: " + newName);
    }
    oldFile.renameTo(newFile);
    System.out.println("Renamed '" + oldName + "' to '" + newName + "'.");
  }

  public static void renameInRootDirectory(String oldName, String newName) throws Exception {
    File oldFile = new File("/" + oldName);
    if (!oldFile.exists()) {
      throw new Exception("File does not exist: " + oldName);
    }
    File newFile = new File("/" + newName);
    if (newFile.exists()) {
      throw new Exception("File already exists: " + newName);
    }
    oldFile.renameTo(newFile);
    System.out.println("Renamed '" + oldName + "' to '" + newName + "'.");
  }
}
