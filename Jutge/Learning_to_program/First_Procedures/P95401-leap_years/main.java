import java.util.Scanner;

class Main {

  public static void main(String[] args) {
    final Scanner sc = new Scanner(System.in);
    while (sc.hasNextInt()) {
      int a = sc.nextInt();
      System.out.println(Solution.isLeapYear(a) ? "true" : "false");
    }
  }

}
