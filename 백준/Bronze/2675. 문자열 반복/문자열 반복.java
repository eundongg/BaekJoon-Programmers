import java.io.*;
import java.util.*;
public class Main{
    public static void main(String[] args) throws IOException{
           
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int testCase = Integer.parseInt(br.readLine());
        
        while(testCase>0){
            StringTokenizer st = new StringTokenizer(br.readLine());
            int R = Integer.parseInt(st.nextToken());
            String S = st.nextToken();
            
            for(int i=0;i<S.length();i++){
                for(int j=0;j<R;j++){
                    System.out.print(S.charAt(i));
                }
            }
            
            testCase--;
            System.out.print("\n");
        }
    
    }
}