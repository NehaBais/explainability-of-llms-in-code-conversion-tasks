package main;

import java.util.*;

class MatchStrings {
  public static void main(String[] args) {
    String first = "abracadabra";
    String second = "abr";

    System.out.println("1. " + first + " starts with " + second + ": " + first.startsWith(second));
    int i = first.indexOf(second);
    System.out.println("2. " + first + " contains " + second + ": " + (i >= 0));
    if (i >= 0) {
      System.out.print("2.1. at location ");
      for (int start = i + 1; ; ) {
        int j = first.indexOf(second, start);
        if (j < 0) {
          break;
        }
        System.out.print(start + ",");
        start = j + 1;
      }
      System.out.println("2.2. and that's all");
    }
    System.out.println("3. " + first + " ends with " + second + ": " + first.endsWith(second));
  }
}
