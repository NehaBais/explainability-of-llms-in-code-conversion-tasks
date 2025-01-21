import java.io.File;

public class Main {
  public static void main(String[] args) {
    // First, rename the current directory
    try {
      File currentDirectory = new File(".");
      if (currentDirectory.renameTo(new File("output"))) {
        System.out.println("Current directory renamed successfully");
      } else {
        System.out.println("Failed to rename current directory");
      }
    } catch (Exception e) {
      e.printStackTrace();
    }

    // Then, rename the root directory
    try {
      if (new File("/").renameTo(new File("/mydocs"))) {
        System.out.println("Root directory renamed successfully");
      } else {
        System.out.println("Failed to rename root directory");
      }
    } catch (Exception e) {
      e.printStackTrace();
    }
  }
}
