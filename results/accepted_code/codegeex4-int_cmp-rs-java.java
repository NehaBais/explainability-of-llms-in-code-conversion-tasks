import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
  public static void main(String[] args) throws IOException {
    BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
    int a = Integer.parseInt(reader.readLine());
    int b = Integer.parseInt(reader.readLine());

    if (a < b) {
      System.out.println(a + " is less than " + b);
    } else if (a == b) {
      System.out.println(a + " equals " + b);
    } else if (a > b) {
      System.out.println(a + " is greater than " + b);
    }
  }
}
