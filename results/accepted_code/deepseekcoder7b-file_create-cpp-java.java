import java.io.File;
import java.io.IOException;

public class Main {
  public static void main(String[] args) {
    // Creating file in current working directory
    File f1 = new File("output.txt");
    try {
      f1.createNewFile();
    } catch (IOException e) {
      e.printStackTrace();
    }

    // Creating directory in current working directory
    File docs = new File("docs");
    if (!docs.exists()) {
      docs.mkdirs();
    }

    // Creating file at filesystem root (this might require additional permissions)
    // Please replace "c:" with your system's root directory e.g., "/" for Unix/Linux, "C:\\" for
    // Windows
    File f2 = new File("c:/output.txt");
    try {
      f2.createNewFile();
    } catch (IOException e) {
      e.printStackTrace();
    }

    // Creating directory at filesystem root similarly replace "c:" with your system's root
    // directory
    File docsRoot = new File("c:/docs");
    if (!docsRoot.exists()) {
      docsRoot.mkdirs();
    }
  }
}
