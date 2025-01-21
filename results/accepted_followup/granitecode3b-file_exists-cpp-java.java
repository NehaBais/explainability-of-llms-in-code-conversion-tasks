import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class FileExists {

  public static void main(String[] args) {
    Path path1 = Paths.get("input.txt");
    if (Files.exists(path1)) {
      System.out.println(path1 + " exists.");
      if (Files.isDirectory(path1)) {
        System.out.println(path1 + " is a directory.");
      } else {
        try {
          System.out.println("File size: " + Files.size(path1) + " bytes");
        } catch (IOException e) {
          System.err.println("Error getting file size: " + e.getMessage());
        }
      }
    } else {
      System.out.println(path1 + " does not exist.");
    }

    Path path2 = Paths.get(""); // current working directory
    Path path3 = Paths.get("/input.txt"); // root directory
    Path path4 = Paths.get("/"); // root directory
    if (Files.exists(path2)) {
      System.out.println(path2 + " exists.");
      if (Files.isDirectory(path2)) {
        System.out.println(path2 + " is a directory.");
      } else {
        try {
          System.out.println("File size: " + Files.size(path2) + " bytes");
        } catch (IOException e) {
          System.err.println("Error getting file size: " + e.getMessage());
        }
      }
    } else {
      System.out.println(path2 + " does not exist.");
    }

    if (Files.exists(path3)) {
      System.out.println(path3 + " exists.");
      if (Files.isDirectory(path3)) {
        System.out.println(path3 + " is a directory.");
      } else {
        try {
          System.out.println("File size: " + Files.size(path3) + " bytes");
        } catch (IOException e) {
          System.err.println("Error getting file size: " + e.getMessage());
        }
      }
    } else {
      System.out.println(path3 + " does not exist.");
    }

    if (Files.exists(path4)) {
      System.out.println(path4 + " exists.");
      if (Files.isDirectory(path4)) {
        System.out.println(path4 + " is a directory.");
      } else {
        try {
          System.out.println("File size: " + Files.size(path4) + " bytes");
        } catch (IOException e) {
          System.err.println("Error getting file size: " + e.getMessage());
        }
      }
    } else {
      System.out.println(path4 + " does not exist.");
    }
  }
}
