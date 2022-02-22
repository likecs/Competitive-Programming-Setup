import java.io.*;
import java.util.*;
import java.math.*;
 
public class Main {
    public static void main(String[] args) throws Exception  {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        InputReader in = new InputReader(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        Task solver = new Task();
        int tesCases = in.nextInt();
        for(int test = 1; test <= tesCases; test += 1) {
            solver.solve(test, in, out);
        }
        out.close();
    }
    
    static class Task {
        static final int MOD = (int) (1e9 + 7);

        public void solve(int testNumber, InputReader in, PrintWriter out) {
            //Your code goes below

        }
    }

    static class InputReader {
        public BufferedReader take;
        public StringTokenizer split;
        public InputReader(InputStream stream) {
            take = new BufferedReader(new InputStreamReader(stream), 10000000);
            split = null;
        }
        public String next() {
            while (split == null || !split.hasMoreTokens()) {
                try {
                    split = new StringTokenizer(take.readLine());
                } 
                catch (IOException e) {
                    throw new RuntimeException(e);
                }
            }
            return split.nextToken();
        }
        public int nextInt() {
            return Integer.parseInt(next());
        }
    }
}