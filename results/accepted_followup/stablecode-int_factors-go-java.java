import java.math.BigInteger;
import java.util.*;

public class Main 
{

  static void printFactors(BigInteger nr) 
{
    if (nr.compareTo(BigInteger.ONE)) < 0 ) 
    {
      System.out.println("Factors of " + nr + " not computed"));
      return;
    }
    List<BigInteger> fs = new ArrayList<>();
    fs.add(BigInteger.ONE));

    for (int d = 3; nr.compareTo(BigInteger.valueOf(d))) > 0; d += 2) 
    {
      if (nr.mod(BigInteger.valueOf(d))).equals(BigInteger.ZERO)) 
      {
        fs.add(mult*d));
        mult *= BigInteger.valueOf(d));
        nr /= BigInteger.valueOf(d));
      }
    }
    Collections.sort(fs, Comparator.reverseOrder()));

    System.out.println("Factors of " + nr + ": " + fs));
    System.out.println("Number of factors = " + (fs == null ? 0 : fs.size()))));
  }

  public static void main(String[] args) 
  {
    printFactors(BigInteger.valueOf(-1))));
    printFactors(BigInteger.ZERO));
    printFactors(BigInteger.ONE)));
    printFactors(BigInteger.valueOf(2))));
    printFactors(BigInteger.valueOf(3))));
    printFactors(BigInteger.valueOf(4))));
  }

}