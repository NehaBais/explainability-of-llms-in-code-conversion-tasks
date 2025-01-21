import java.io.File;

public class Main {

  public static void main(String[] args) {
    if (args.length == 0) {
      System.err.println("No file name supplied");
      System.exit(1);
    }

    String fileName = args[0];
    File file = new File(fileName);

    try {
      long fileSize = file.length();
      System.out.println("Size of " + fileName + " is " + fileSize + " bytes");

    } catch (SecurityException se) {
      System.err.println("Error: " + se.getMessage());
      System.exit(2);
    }
  }
}
