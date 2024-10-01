import java.io.*;

public class Main {
  public static void main(String[] args) throws IOException {
    // Create a new empty file called "output.txt" of size 0 bytes in the current working directory
    FileOutputStream outputStream = new FileOutputStream("output.txt");
    outputStream.close();

    // Create an empty directory called "docs" in the filesystem root
    String path = "/docs";
    File dir = new File(path);
    if (!dir.exists()) {
      dir.mkdirs();
    }

    // Now, create a new file called "output.txt" of size 0 bytes and an empty directory called
    // "docs" in the current working directory
    outputStream = new FileOutputStream("output.txt");
    outputStream.close();

    dir = new File(path);
    if (!dir.exists()) {
      dir.mkdirs();
    }
  }
}
