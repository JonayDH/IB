import java.util.Scanner;

class Main {

  public static void main(String[] args) {
    final Scanner sc = new Scanner(System.in);
    while (sc.hasNextInt()) {
      int n1 = sc.nextInt();
      int[] v1 = new int[n1];
      for (int i = 0; i < n1; ++i) v1[i] = sc.nextInt();
      int n2 = sc.nextInt();
      int[] v2 = new int[n2];
      for (int i = 0; i < n2; ++i) v2[i] = sc.nextInt();
      int[] res = Solution.concatenation(v1, v2);
      System.out.println(res.length);
      for (int i = 0; i < res.length; ++i) System.out.print(" " + res[i]);
      System.out.println();
    }
  }

}
