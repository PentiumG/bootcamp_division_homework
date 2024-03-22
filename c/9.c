/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int n, i, ans = 0;
    
    do{
        scanf("%d",&n);
        if(n <= 0){
            printf("X\n");
        }
    }while(n <= 0);

    for(i = 1; i <= n; i++){
        ans += i;
    }
    printf("%d\n",ans);
    

    return 0;
}