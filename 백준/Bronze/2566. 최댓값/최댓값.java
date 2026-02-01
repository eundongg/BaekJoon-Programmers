import java.io.*;
import java.util.*;
public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int[][] arr = new int[9][9];
        int max = -1; // 입력값 범위가 0 이상이므로 -1로 설정
        int row=0, col=0;
        
        for(int i=0;i<9;i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            for(int j=0;j<9;j++){
                arr[i][j] = Integer.parseInt(st.nextToken());
                if(max<arr[i][j]){
                    max = arr[i][j];
                    row = i+1;
                    col = j+1;
                }
            }
        }
        System.out.println(max);
        System.out.print(row + " "+ col);
    }
}