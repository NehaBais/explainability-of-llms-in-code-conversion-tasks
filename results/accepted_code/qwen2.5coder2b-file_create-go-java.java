import java.io.File;

public class Main {
  public static void createFile(String fn) throws Exception {
    try (File file = new File(fn)) {
      if (!file.createNewFile()) {
        throw new Exception("Failed to create file.");
      }
      System.out.println("File " + fn + " created!");
    }
  }

  public static void createDir(String dn) throws Exception {
    File dir = new File(dn);
    if (dir.mkdir()) {
      System.out.println("Directory " + dn + " created!");
    } else {
      throw new Exception("Failed to create directory.");
    }
  }

  public static void main(String[] args) {
    try {
      createFile("output.txt");
      createDir("docs");

      // Check the size of the file
      System.out.println("Size of output.txt: " + new File("output.txt").length());

      // Check the existence of the directory
      System.out.println("Does docs exist? " + new File("docs").exists());
    } catch (Exception e) {
      e.printStackTrace();
    }
  }
}
