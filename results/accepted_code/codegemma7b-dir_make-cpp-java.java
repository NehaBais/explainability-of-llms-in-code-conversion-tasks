import java.io.File;

public class mkdir_p {

  public static void main(String[] args) {
    if (args.length != 1) {
      System.out.println("usage: mkdir <path>");
      return;
    }

    File directory = new File(args[0]);

    if (directory.exists()) {
      return;
    }

    if (directory.mkdirs()) {
      System.out.println("Directory created successfully: " + directory.getAbsolutePath());
    } else {
      System.out.println("Could not create directory: " + directory.getAbsolutePath());
    }
  }
}
