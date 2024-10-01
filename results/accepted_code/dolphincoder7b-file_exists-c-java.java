import java.io.File;

public class Main {
  public static void main(String[] args) {
    File input = new File("input.txt");
    System.out.println("input.txt is a regular file? " + (input.exists() && input.isFile()));
    File docs = new File("docs");
    System.out.println("docs is a directory? " + docs.exists() && docs.isDirectory());

    File fsInput = new File("/input.txt");
    System.out.println("/input.txt is a regular file? " + (fsInput.exists() && fsInput.isFile()));
    File fsDocs = new File("/docs");
    System.out.println("/docs is a directory? " + fsDocs.exists() && fsDocs.isDirectory());
  }
}
