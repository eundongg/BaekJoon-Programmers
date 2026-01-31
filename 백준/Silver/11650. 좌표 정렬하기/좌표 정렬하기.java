import java.io.*;
import java.util.*;
public class Main{
    
    static class Dot{
        int x,y;
        
        Dot(int x, int y){
            this.x = x;
            this.y = y;
        }
    }
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int testCase = Integer.parseInt(br.readLine());
        Dot[] dot = new Dot[testCase];
        
        for(int i=0;i<testCase;i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());       
            dot[i] = new Dot(x,y);
        }
        Arrays.sort(dot, (d1,d2)->{            
            if(d1.x == d2.x){
                return d1.y-d2.y;
            }
            else{
                return d1.x-d2.x;
            }
        });
        StringBuilder sb = new StringBuilder();
        for(int i=0;i<testCase;i++){
            sb.append(dot[i].x).append(" ").append(dot[i].y).append("\n");
        }
        System.out.print(sb);
        
    }
}