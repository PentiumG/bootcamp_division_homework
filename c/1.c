/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int n , i;
    scanf("%d",&n);

    int ans = 0 , u = 0;
    for(i = 1; i < 1000; i*=10){
        ans += 100 * (n % (i * 10) - n % i) / (i * i) ;
    }
    printf("%d",ans);
    return 0;
}