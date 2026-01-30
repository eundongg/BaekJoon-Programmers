import java.io.*;
import java.util.*;

public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        String num1 = new StringBuilder(st.nextToken()).reverse().toString();
        String num2 = new StringBuilder(st.nextToken()).reverse().toString();
        
        System.out.println(Integer.parseInt(num1)>Integer.parseInt(num2)? num1: num2);
        
    }
}