import java.io.File;

public class Main {
  public static void create(String directory) throws Exception {
    File f = new File(directory);

    if (!f.exists()) {
      // Create a new empty file of size 0 bytes
      try (FileOutputStream fos = new FileOutputStream(f, false)) {
        fos.write(new byte[0]);
      }

      // Create an empty directory
      f.mkdir();
    } else {
      System.out.println("Directory already exists.");
    }
  }

  public static void main(String[] args) throws Exception {
    create("./"); // current directory
    create("/");
  }
}
