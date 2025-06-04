#include "contact.h" // Contact 구조체와 관련된 정의를 포함하는 사용자 정의 헤더 파일 포함
#include <stdio.h>   // 표준 입출력 함수 사용을 위한 헤더 파일
#include <string.h>  // 문자열 함수(strcmp 등) 사용을 위한 헤더 파일

// isEqualContact()
// 두 Contact 구조체 값이 같은지 비교하는 함수
// 반환값: 같으면 1(true), 다르면 0(false)
int isEqualContact(Contact a, Contact b){
    // 이름, 전화번호, 성별, 연도를 모두 비교하여 같으면 1 반환
    if(a.year == b.year && a.gender == b.gender && 
        strcmp(a.name, b.name) == 0 && 
        strcmp(a.phone, b.phone) == 0)
        {
        return 1; // 모든 필드가 같으면 true
    }

    return 0; // 하나라도 다르면 false
}

// Contact 구조체 값을 출력하는 함수
void printContact(Contact ct){
    // 이름 출력
    printf("이름 : %s \n", ct.name);
    // 전화번호 출력
    printf("전번 : %s \n", ct.phone);
    // 성별 출력 (MAN이면 "남자", 그렇지 않으면 "여자")
    printf("성별 : %s \n", ct.gender == MAN ? "남자" : "여자");
    // 연도 출력
    printf("연도 : %4d \n", ct.year);
}

// isEqualContactPtr()
// Contact 구조체 포인터를 이용해 값 비교
// 반환값: 같으면 1(true), 다르면 0(false)
int isEqualContactPtr(const Contact * a, const Contact * b){
    // 포인터를 통해 멤버에 접근하여 비교
    if(a->year == b->year && a->gender == b->gender && 
        strcmp(a->name, b->name) == 0 && 
        strcmp(a->phone, b->phone) == 0)
        {
        return 1; // 모든 필드가 같으면 true
    }

    return 0; // 하나라도 다르면 false
}

// Contact 구조체 포인터를 이용해 정보 출력
void printContactPtr(const Contact * ct){
    // 이름 출력
    printf("이름 : %s \n", ct->name);
    // 전화번호 출력
    printf("전번 : %s \n", ct->phone);
    // 성별 출력 (MAN이면 "남자", 아니면 "여자")
    printf("성별 : %s \n", ct->gender == MAN ? "남자" : "여자");
    // 연도 출력
    printf("연도 : %4d \n", ct->year);    
}
