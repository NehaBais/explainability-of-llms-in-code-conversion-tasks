import java.io.*;

public class Main {
  static void fct(Exception err) {
    if (err != null) System.out.println(err);
  }

  public static void main(String[] args) {
    try {
      File file = new File("output.txt");
      if (file.createNewFile()) {
        System.out.println("Output file created successfully");
      } else {
        fct(new Exception("Failed to create output file"));
      }

      File dir = new File("docs");
      dir.mkdir();
    } catch (Exception e) {
      fct(e);
    }
  }
}
