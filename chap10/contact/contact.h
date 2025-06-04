// #pragma once

#ifndef _CONTACT_H // 헤더 가드 시작: 중복 포함 방지
#define _CONTACT_H // 매크로 정의: 헤더가 한 번만 포함되도록 보장

enum gender {MAN, WOMEN}; // 열거형 정의: 성별을 MAN(0), WOMEN(1)으로 나타냄
typedef enum gender EGender; // 열거형 별칭: enum gender를 EGender로 간편히 사용

struct contact { // 구조체 정의: 연락처 정보(이름, 전화번호, 성별, 연도)를 묶음
    char name[24]; // 멤버: 최대 24자 문자열로 이름 저장
    char phone[24]; // 멤버: 최대 24자 문자열로 전화번호 저장
    EGender gender; // 멤버: 성별을 EGender 열거형으로 저장
    int year; // 멤버: 연도(정수)를 저장
};

typedef struct contact Contact; // 구조체 별칭: struct contact를 Contact로 간편히 사용

int isEqualContact(Contact a, Contact b); // 함수 선언: 두 Contact 구조체의 동일성 비교
void printContact(Contact ct); // 함수 선언: Contact 구조체의 정보 출력
int isEqualContactPtr(const Contact * a, const Contact * b); // 함수 선언: 두 Contact 포인터로 동일성 비교
void printContactPtr(const Contact * ct); // 함수 선언: Contact 포인터로 구조체 정보 출력

#endif // 헤더 가드 종료: 조건부 포함 종료
