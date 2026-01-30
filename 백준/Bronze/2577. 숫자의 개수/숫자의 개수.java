import java.io.*;
public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int first = Integer.parseInt(br.readLine());
        int second = Integer.parseInt(br.readLine());
        int third = Integer.parseInt(br.readLine());
        
        long totalMulti = first*second*third;
        String str = String.valueOf(totalMulti);
        int[] arrCnt = new int[10];
        for(int i=0;i<str.length();i++){
            int digit = str.charAt(i)-'0'; // charAt(i)는 문자('1')이므로 '0'을 빼주어야 실제 숫자가 됨
            arrCnt[digit]++;
        }
        
        for(int i=0;i<arrCnt.length;i++){
            System.out.println(arrCnt[i]);
        }
        
    }
}