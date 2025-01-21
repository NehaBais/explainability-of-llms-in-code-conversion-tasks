import java.util.*;

public class Main {
  public static List<Integer> factors(int num) {
    List<Integer> nFactors = new ArrayList<>();
    int i;

    for (i = 1; i <= Math.floor(Math.sqrt(num)); i += 1)
      if (num % i == 0) {
        nFactors.add(i);
        if (num / i != i) nFactors.add(num / i);
      }
    Collections.sort(nFactors, Comparator.comparingInt((Integer a) -> a)); // numeric sort
    return nFactors;
  }

  public static void main(String[] args) {
    System.out.println(Arrays.toString(factors(45).toArray())); // [1,3,5,9,15,45]
    System.out.println(Arrays.toString(factors(53).toArray())); // [1,53]
    System.out.println(Arrays.toString(factors(64).toArray())); // [1,2,4,8,16,32,64]
  }
}
