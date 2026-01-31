import java.io.*;
public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int origin = Integer.parseInt(br.readLine());
        int num = origin;
        int cnt =0;
        
        while(true){
            
            int first = num/10;
            int second = num%10;
            int sum = first + second;
            
            num = second*10 + sum%10;
            
            cnt++;
            if(origin == num) break;
        }
        System.out.print(cnt);
    }
}