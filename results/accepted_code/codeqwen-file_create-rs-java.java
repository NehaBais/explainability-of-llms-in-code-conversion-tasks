import java.io.*;

public class Main {
  private static final String FILE_NAME = "output.txt";
  private static final String DIR_NAME = "docs";

  public static void main(String[] args) {
    create(".").andThen(Main::createRoot);
  }

  private static File create(String root) {
    File fPath = new File(root, FILE_NAME);
    File dPath = new File(root, DIR_NAME);
    if (!dPath.mkdir()) System.out.println("Error creating directory: " + dPath.getAbsolutePath());

    try {
      return fPath.createNewFile() ? fPath : null;
    } catch (IOException e) {
      System.out.println("Error creating file: " + fPath.getAbsolutePath());
      e.printStackTrace();
    }

    return null;
  }

  private static void createRoot() {
    File root = new File("/");
    if (!root.exists())
      System.out.println("Error accessing root directory: " + root.getAbsolutePath());
    create(root.getAbsolutePath());
  }

  private static void errorHandler(Exception e, int code) {
    System.err.println("Error: " + e.getMessage());
    System.exit(code);
  }
}
