import java.util.ArrayList;

public class Main {
  static ArrayList<Integer> generateFactors(int n) {
    ArrayList<Integer> factors = new ArrayList<>();
    for (int i = 2; i * i <= n; ++i) {
      if (n % i == 0) {
        factors.add(i);
        if (i * i != n) factors.add(n / i);
      }
    }
    return factors;
  }

  public static void main(String[] args) {
    int[] sampleNumbers = {3135, 45, 60, 81};
    for (int number : sampleNumbers) {
      ArrayList<Integer> factors = generateFactors(number);
      System.out.println("Factors of " + number + " are: " + factors.toString());
    }
  }
}
