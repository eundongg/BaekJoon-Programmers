import java.io.*;
import java.util.*;
public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int subject = Integer.parseInt(br.readLine());
        int[] sub = new int[subject];
        int max =0;
        double sum =0.0; // 합계는 반드시 double이어야 소수점이 안날라감
        
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        for(int i=0;i<subject;i++){
            sub[i] = Integer.parseInt(st.nextToken());
            if(sub[i]>max){
                max = sub[i];
            } 
        }
        
        for(int i=0;i<subject;i++){            
            sum += (double)sub[i]/max*100;
        }
        System.out.print(sum/subject);
    }
}