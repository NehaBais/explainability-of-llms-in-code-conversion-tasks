import java.io.File;
import java.io.IOException;

public class Main {

  public static void create(String directory) {
    try {
      // Create an empty file named "output.txt" in the given directory
      File outputTxt = new File(directory + "/output.txt");
      if (outputTxt.createNewFile()) {
        System.out.println("File created: " + outputTxt.getName());
      } else {
        System.out.println("File already exists.");
      }

      // Create an empty directory named "docs" in the given directory
      File docsDir = new File(directory + "/docs");
      if (docsDir.mkdir()) {
        System.out.println("Directory created: " + docsDir.getName());
      } else {
        System.out.println("Directory creation failed.");
      }
    } catch (IOException e) {
      System.out.println("An error occurred.");
      e.printStackTrace();
    }
  }

  public static void main(String[] args) {
    // Create in the current working directory
    create(System.getProperty("user.dir"));

    // Create at the filesystem root
    if (!System.getProperty("os.name")
        .toLowerCase()
        .contains("windows")) { // Due to permission issues on Windows, we should check this.
      create("/");
    }
  }
}
