import java.io.*;
import java.util.*;
public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int testCase = Integer.parseInt(br.readLine());
        
        int[][] canvas = new int[100][100];
        int totalArea = 0;
        
        for(int i=0;i<testCase;i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            
            for(int row =x;row<x+10;row++){
                for(int col=y;col< y+10;col++){
                    if(canvas[row][col]==0){
                        canvas[row][col]=1;
                        totalArea++;
                    }
                }
            }
            
        }
        System.out.print(totalArea);   
    }
}