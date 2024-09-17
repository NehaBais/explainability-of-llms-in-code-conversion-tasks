package main;

import java.util.*;

public class Main {
  public static void main(String[] args) {
    printFactors(-1);
    printFactors(0);
    printFactors(1);
    printFactors(2);
    printFactors(3);
    printFactors(53);
    printFactors(45);
    printFactors(64);
    printFactors(600851475143L);
    printFactors(999999999999999989L);
  }

  public static void printFactors(long nr) {
    if (nr < 1) {
      System.out.println("Factors of " + nr + " not computed");
      return;
    }
    System.out.printf("Factors of %d: ", nr);
    List factors = new ArrayList<>();
    factors.add(1L);
    for (int i = 0; i < factors.size(); i++) {
      long p = factors.get(i);
      int e = 0;
      while (nr % p == 0) {
        nr /= p;
        e++;
      }
      if (e > 0) {
        factors.add((long) Math.pow(p, e));
      }
    }
    for (long factor : factors) {
      System.out.print(factor + " ");
    }
    System.out.println();
    System.out.println("Number of factors = " + factors.size());
  }
}
