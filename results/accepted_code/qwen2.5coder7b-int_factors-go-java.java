public class Main {

  public static void main(String[] args) {
    printFactors(-1L);
    printFactors(0L);
    printFactors(1L);
    printFactors(2L);
    printFactors(3L);
    printFactors(53L);
    printFactors(45L);
    printFactors(64L);
    printFactors(600851475143L);
    printFactors(999999999999999989L);
  }

  public static void printFactors(long nr) {
    if (nr < 1) {
      System.out.println("Factors of " + nr + " not computed");
      return;
    }
    System.out.printf("Factors of %d: ", nr);
    long[] fs = new long[1];
    fs[0] = 1L;
    Runnable apf =
        () -> {
          int n = fs.length;
          for (int i = 0, pp = 2; i < n; i++, pp *= 2) {
            for (int j = 0; j < n; j++) {
              fs = addToArray(fs, fs[j] * pp);
            }
          }
        };
    int e = 0;
    while ((nr & 1) == 0) {
      nr >>= 1;
      e++;
    }
    apf.run();
    for (long d = 3; nr > 1; d += 2) {
      if (d * d > nr) {
        d = nr;
      }
      int factor = 0;
      while (nr % d == 0) {
        nr /= d;
        factor++;
      }
      if (factor > 0) {
        apf.run();
      }
    }
    System.out.println(java.util.Arrays.toString(fs));
    System.out.println("Number of factors =" + fs.length);
  }

  public static long[] addToArray(long[] arr, long value) {
    long[] newArr = new long[arr.length + 1];
    System.arraycopy(arr, 0, newArr, 0, arr.length);
    newArr[newArr.length - 1] = value;
    return newArr;
  }
}
