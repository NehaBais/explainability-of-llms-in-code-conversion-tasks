import java.io.File;

public class RenameFiles {
  public static void main(String[] args) {
    // Current working directory
    renameInCurrentDirectory();

    // Filesystem root
    renameInFileSystemRoot();
  }

  private static void renameInCurrentDirectory() {
    String currentDir = System.getProperty("user.dir");
    String inputFilePath = currentDir + File.separator + "input.txt";
    String outputFilePath = currentDir + File.separator + "output.txt";
    String docsPath = currentDir + File.separator + "docs";
    String mydocsPath = currentDir + File.separator + "mydocs";

    renameFile(inputFilePath, outputFilePath);
    renameDirectory(docsPath, mydocsPath);
  }

  private static void renameInFileSystemRoot() {
    // Assuming the filesystem root is represented by ""
    String inputFilePath = "" + File.separator + "input.txt";
    String outputFilePath = "" + File.separator + "output.txt";
    String docsPath = "" + File.separator + "docs";
    String mydocsPath = "" + File.separator + "mydocs";

    renameFile(inputFilePath, outputFilePath);
    renameDirectory(docsPath, mydocsPath);
  }

  private static void renameFile(String oldName, String newName) {
    File file = new File(oldName);
    if (file.exists() && file.isFile()) {
      if (file.renameTo(new File(newName))) {
        System.out.println("Renamed: " + oldName + " to " + newName);
      } else {
        System.err.println("Failed to rename: " + oldName + " to " + newName);
      }
    } else {
      System.err.println(oldName + " does not exist or is not a file.");
    }
  }

  private static void renameDirectory(String oldName, String newName) {
    File directory = new File(oldName);
    if (directory.exists() && directory.isDirectory()) {
      if (directory.renameTo(new File(newName))) {
        System.out.println("Renamed: " + oldName + " to " + newName);
      } else {
        System.err.println("Failed to rename: " + oldName + " to " + newName);
      }
    } else {
      System.err.println(oldName + " does not exist or is not a directory.");
    }
  }
}
