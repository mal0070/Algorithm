//2745 진법변환
//c언어 하다가 런타임 에러나서 자바로 다시 함

import java.util.Scanner;

public class changeNum{
     public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String N = sc.next();
        int B = sc.nextInt();
        int len = N.length();
        int result = 0;
        int num = 0;

        for(int i=0;i<len;i++){
            if(N.charAt(i)>=65)  //charAt(): String 타입 문자열을 char타입 문자열으로 바꾸어 주는 메소드
                num = N.charAt(i)-55;
            else
                num = N.charAt(i)-'0';
            int t = (int)Math.pow(B, len-i-1);//Math.pow(대상숫자, 지수) -> 거듭제곱 구하는 메소드, double형
            //제곱수가 올라가는 형태를 생각해보면, 배열 인덱스와 반대로 지수가 올라가므로 (len-i)-1 해주어야 함
            result += t*num;
        }
        System.out.println(result);  
        sc.close();
    }
  
}