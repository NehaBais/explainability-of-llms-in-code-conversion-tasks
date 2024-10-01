import java.io.*;

public class Main {

  public static void main(String[] args) throws IOException {
    // Create a file "output.txt" with size 0
    FileOutputStream fos = new FileOutputStream("output.txt");
    fos.close();

    // Creating directory "docs" in current working directory
    File dir = new File("docs");
    dir.mkdir();

    // Creating directory "/docs" in filesystem root
    File file = new File("/docs");
    file.mkdirs();
  }
}
