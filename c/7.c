/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int cal[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int year, month;
    scanf("%d",&year);
    scanf("%d",&month);

    if(month == 2){
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
            cal[1] += 1;
        }
    }

    printf("%d",cal[month-1]);
    return 0;
}