import java.io.File;

public class Main {
  public static void printFileSize(String filename) {
    try {
      File file = new File(filename);

      if (file.exists()) { // checks if the file exists
        long sizeInBytes = file.length(); // gets the length of the file in bytes
        System.out.println("Size of file " + filename + " is " + sizeInBytes + " bytes.");

      } else {
        System.out.println(filename + " does not exist!");
      }
    } catch (
        Exception ex) { // catching all exceptions because we are uncertain about the exact type of
      // exception that might be thrown
      System.err.println(ex.getMessage());
    }
  }

  public static void main(String[] args) {
    printFileSize("input.txt");
    printFileSize(
        "/input.txt"); // note: "/" is used in Unix systems to denote the root of the file system,
    // but it's not standard across all platforms and this might fail on Windows
    // if input.txt resides in a different drive.
  }
}
