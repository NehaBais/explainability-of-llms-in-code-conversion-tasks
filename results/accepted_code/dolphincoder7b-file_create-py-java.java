import java.io.File;

public class Main {
  public static void main(String[] args) {
    createCurrentDirectory();
    createFilesystemRoot();
  }

  private static void createCurrentDirectory() {
    String directory = "."; // current directory

    try {
      File outputTxt = new File(directory + "/output.txt");
      if (!outputTxt.exists()) {
        outputTxt.createNewFile();
      } else {
        System.out.println("File already exists.");
      }
      File docsFolder = new File(directory + "/docs");
      if (!docsFolder.exists()) {
        docsFolder.mkdirs();
      }
    } catch (Exception e) {
      System.out.println("Error occurred during file creation: " + e);
    }
  }

  private static void createFilesystemRoot() {
    String directory = "/"; // root directory

    try {
      File outputTxt = new File(directory + "/output.txt");
      if (!outputTxt.exists()) {
        outputTxt.createNewFile();
      } else {
        System.out.println("File already exists.");
      }
      File docsFolder = new File(directory + "/docs");
      if (!docsFolder.exists()) {
        docsFolder.mkdirs();
      }
    } catch (Exception e) {
      System.out.println("Error occurred during file creation: " + e);
    }
  }
}
