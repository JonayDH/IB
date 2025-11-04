import java.util.Scanner;

class Main {

  public static void main(String[] args) {
    final Scanner sc = new Scanner(System.in);
    while (sc.hasNextInt()) {
      int a = sc.nextInt();
      int b = sc.nextInt();
      System.out.println(Solution.max2(a, b));
    }
  }

}
