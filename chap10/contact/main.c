gcc main.c contact.c -o main

#include <stdio.h>        // 표준 입출력 함수 사용을 위한 헤더 파일
#include "contact.h"      // Contact 구조체 및 관련 함수들의 선언이 들어 있는 사용자 정의 헤더

void testContact();       // testContect 함수의 선언 (오타 있음: 실제 정의는 testContact임)

int main(){
    testContact();        // testContect 함수 호출 (오타: 실제 정의된 함수 이름은 testContact)

    return 0;             // 프로그램 정상 종료
}

// Contact 관련 기능을 테스트하는 함수 정의
void testContact(){
    // Contact 구조체 변수 c1 초기화
    Contact c1 = {"홍길동", "01027780298", MAN, 2025};
    // Contact 구조체 변수 c2 초기화 (c1과 동일한 내용)
    Contact c2 = {"홍길동", "01027780298", MAN, 2025};
    // Contact 구조체 변수 c3 초기화 (이름만 다름)
    Contact c3 = {"김길동", "01027780298", MAN, 2025};

    // c1 정보 출력 (값 전달 방식)
    printContact(c1);
    // c2 정보 출력 (포인터 전달 방식)
    printContactPtr(&c2);

    // c1과 c2가 같은지 비교 (값 기반 비교 함수 호출)
    int result1 = isEqualContact(c1, c2);
    // c2와 c3가 같은지 비교 (포인터 기반 비교 함수 호출)
    int result2 = isEqualContact(*&c2, *&c3);

    // 비교 결과 출력
    printf("c1과 c2는 %s\n", result1 ? "같습니다." : "다릅니다.");
    printf("c2과 c3는 %s\n", result2 ? "같습니다." : "다릅니다.");
}
