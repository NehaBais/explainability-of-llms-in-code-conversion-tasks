import java.io.*;

public class Main {
  public static void main(String[] args) {
    createEmptyFileAndDirectory("output.txt", "docs");
    createEmptyFileAndDirectory("/output.txt", "/docs");
  }

  static void createEmptyFileAndDirectory(String fileName, String directoryName) {
    try {
      // Create an empty file
      File file = new File(fileName);
      file.createNewFile();

      // Create an empty directory
      File dir = new File(directoryName);
      dir.mkdir();
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
