package main;

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter a string: ");
    String str = scanner.nextLine();
    System.out.print("Enter a value to interpolate: ");
    String txt = scanner.nextLine();
    String out = String.format("%s had a %s lamb", str, txt);
    System.out.println(out);
  }
}
