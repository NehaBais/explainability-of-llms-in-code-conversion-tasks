import java.io.*;

public class Main {

  public static void main(String[] args) throws IOException {
    // Create an empty file "output.txt" in the current working directory and set its permissions to
    // rw-r-----
    FileOutputStream fos = new FileOutputStream(new File("output.txt"));
    fos.close();

    // Create a new directory "docs" in the current working directory and set its permissions to
    // rwxr-x---
    File docDir = new File("docs");
    docDir
        .mkdir(); // mkdir() returns false if the directory already exists, so we don't worry about
    // that
  }
}
