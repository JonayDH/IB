import java.util.Scanner;
import java.util.TreeSet;
import java.util.Iterator;

class Main {

  public static void main(String[] args) {
    final Scanner sc = new Scanner(System.in);
    while (sc.hasNextInt()) {
      int n = sc.nextInt();
      int[] v = new int[n];
      TreeSet<Integer> a = new TreeSet<>();
      for (int i = 0; i < n; ++i) {
        v[i] = sc.nextInt();
        a.add(v[i]);
      }
      System.out.println(Solution.exists(1234, v) ? "1" : "0");
      System.out.println(Solution.exists(-1000000, v) ? "1" : "0");
      if (n < 100) {
        for (Integer x : a) System.out.println(Solution.exists(x, v) ? "1" : "0");
        if (a.size() > 1) {
          Iterator<Integer> it = a.iterator();
          Integer x = it.next();
          while (it.hasNext()) {
            Integer y = it.next();
            System.out.println(Solution.exists((y + x) / 2, v) ? "1" : "0");
            x = y;
          }
        }
      } else {
        for (int rep = 1000; rep > 0; --rep)
          for (Integer x : a) System.out.println(Solution.exists(x, v) ? "1" : "0");
      }
    }
  }

}
