import java.io.*;

public class Main {

  public static void main(String[] args) throws IOException {
    if (args.length != 1) {
      System.err.println("usage: java Main <path>");
      return;
    }
    createDirectoryAndParents(args[0]);
  }

  private static void createDirectoryAndParents(String path) throws IOException {
    File parentDir = new File(path).getParentFile();
    if (parentDir != null && !parentDir.exists()) {
      createDirectoryAndParents(parentDir.getPath());
    }
    new File(path).mkdir();
  }
}
