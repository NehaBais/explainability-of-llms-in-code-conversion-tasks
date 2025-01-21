import java.io.*;
import java.nio.file.*;

public class FileExists {
  public static void main(String[] args) {
    // Verify that a file called input.txt and a directory called docs exist in the current working
    // directory
    Path path1 = Paths.get("input.txt");
    try {
      if (Files.exists(path1)) {
        System.out.println(path1 + " exists with a file size of " + Files.size(path1) + " bytes.");
      } else {
        System.out.println(path1 + " does not exist.");
      }
    } catch (IOException e) {
      System.out.println("Error: unable to determine the size of " + path1);
    }
    Path path2 = Paths.get("docs/input.txt");
    try {
      if (Files.exists(path2)) {
        System.out.println(path2 + " is a directory.");
      } else {
        System.out.println(path2 + " does not exist.");
      }
    } catch (IOException e) {
      System.out.println("Error: unable to determine whether " + path2 + " exists");
    }

    // Verify that a file called input.txt and a directory called docs exist in the filesystem root
    Path path3 = Paths.get("/input.txt");
    try {
      if (Files.exists(path3)) {
        System.out.println(path3 + " exists with a file size of " + Files.size(path3) + " bytes.");
      } else {
        System.out.println(path3 + " does not exist.");
      }
    } catch (IOException e) {
      System.out.println("Error: unable to determine the size of " + path3);
    }
    Path path4 = Paths.get("/docs/input.txt");
    try {
      if (Files.exists(path4)) {
        System.out.println(path4 + " is a directory.");
      } else {
        System.out.println(path4 + " does not exist.");
      }
    } catch (IOException e) {
      System.out.println("Error: unable to determine whether " + path4 + " exists");
    }
  }
}
