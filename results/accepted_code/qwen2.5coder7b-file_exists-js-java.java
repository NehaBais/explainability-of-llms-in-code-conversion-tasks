import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class FileAndDirectoryCheck {
  public static void main(String[] args) {
    checkFileAndDirectoryInCurrentWorkingDir();
    checkFileAndDirectoryInRootDir();
  }

  private static void checkFileAndDirectoryInCurrentWorkingDir() {
    Path currentDir = Paths.get("").toAbsolutePath();

    // Check if 'input.txt' exists in the current working directory
    Path inputFilePath = currentDir.resolve("input.txt");
    System.out.println("File exists (current dir): " + Files.exists(inputFilePath));

    // Check if 'docs' directory exists in the current working directory
    Path docsDirPath = currentDir.resolve("docs");
    System.out.println(
        "Directory exists (current dir): " + Files.exists(docsDirPath)
            && files.isDirectory(docsDirPath));
  }

  private static void checkFileAndDirectoryInRootDir() {
    // Check if 'input.txt' exists in the root directory
    Path inputFilePath = Paths.get("/input.txt");
    System.out.println("File exists (root dir): " + Files.exists(inputFilePath));

    // Check if 'docs' directory exists in the root directory
    Path docsDirPath = Paths.get("/docs");
    System.out.println(
        "Directory exists (root dir): " + Files.exists(docsDirPath)
            && files.isDirectory(docsDirPath));
  }
}
