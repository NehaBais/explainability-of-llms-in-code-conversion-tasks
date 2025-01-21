import java.io.File;

public class Mkdir {
  public static void main(String[] args) {
    if (args.length != 1) {
      System.err.println("usage: java Mkdir <path>");
      System.exit(1);
    }

    String path = args[0];
    File file = new File(path);

    // Split the path by '/' and create each directory in the path
    String[] parts = path.split("/");
    StringBuilder currentPath = new StringBuilder();

    for (String part : parts) {
      if (!part.isEmpty()) {
        currentPath.append(part);
        File dir = new File(currentPath.toString());
        if (!dir.exists() && !dir.mkdir()) {
          System.err.println("Failed to create directory: " + path);
          System.exit(1);
        }
        currentPath.append("/");
      }
    }
  }
}
