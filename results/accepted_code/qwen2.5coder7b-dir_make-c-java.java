import java.io.File;

public class DirectoryCreator {

  public static void main(String[] args) {
    if (args.length != 1) {
      System.err.println("usage: " + new File(args[0]).getName());
      System.exit(1);
    }
    String path = args[0];
    createDirectory(path);
  }

  public static void createDirectory(String path) {
    File directory = new File(path);

    if (!directory.exists()) {
      boolean created = directory.mkdirs();
      if (created) {
        System.out.println("Directory and parents created successfully.");
      } else {
        System.err.println("Failed to create directory: " + path);
      }
    } else if (directory.isFile()) {
      System.err.println(path + " is a file, not a directory.");
    } else {
      System.out.println("Directory already exists.");
    }
  }
}
