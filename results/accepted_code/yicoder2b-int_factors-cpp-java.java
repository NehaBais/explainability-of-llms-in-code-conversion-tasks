public class Main {
  static void generateFactors(int n) {
    for (int i = 1; i <= n; ++i) {
      if (n % i == 0) {
        System.out.print(i + " ");
      }
    }
    System.out.println();
  }

  public static void main(String[] args) {
    int[] sampleNumbers = {3135, 45, 60, 81};

    for (int number : sampleNumbers) {
      generateFactors(number);
    }
  }
}
