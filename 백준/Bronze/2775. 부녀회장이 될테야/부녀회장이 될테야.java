import java.io.*;
public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int[][] apt = new int [15][15];
        
        //0층 주민들 수 
        for(int i=1;i<15;i++){
            apt[0][i] = i;
        }
        //1층부터
        for(int i=1;i<15;i++){
            for(int j=1;j<15;j++){
                apt[i][j] = apt[i-1][j]+ apt[i][j-1];
            }
        }
        int testCase = Integer.parseInt(br.readLine());
        while(testCase>0){

            int k = Integer.parseInt(br.readLine()); //층
            int n = Integer.parseInt(br.readLine()); //호             

            System.out.println(apt[k][n]);
            testCase --;
        }   
        
    }
}