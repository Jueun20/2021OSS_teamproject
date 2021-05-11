#include <stdio.h>
#include <stdlib.h>
#include "item.h"

//메뉴 선택 함수
int selectMenu(){
        int menu;
        printf("\n*** HOUSE KEEPING BOOK ***\n");
        printf("1. 조회\n");
        printf("2. 추가\n");
        printf("3. 수정\n");
        printf("4. 삭제\n");
        printf("5. 파일저장\n");
        printf("6. 이름검색\n");
        printf("7. 분류검색\n");
        printf("8. 가격검색\n");
        printf("0. 종료\n\n");
        printf("=> 원하는 번호를 입력하세요: ");
        scanf(" %d", &menu);

        return menu;
}

//데이터 항목을 고르는 함수
int selectDataNum(Item *p, int count){
        int no;
//        listItem(p, count);
        printf("번호는(취소:0)? ");
        scanf("%d", &no);
        return no;
}

//번호를 고르는 함수
int selectDataNum(Item *p, int count){
        
}

//제품의 분류항목을 검색하는 함수
void searchCate(Item *p, int count){
        
}

//제품의 등록 날짜를 검색하는 함수
void searchData(Item *p, int count){
        
}

//listItem()
void listItem(Item *p, int count){
        
}

//loadData()
int loadData(Item *p){
        
}

//saveData()
void saveData(Item *p, int count){
        
}

void searchName(Item *p, int count){
        
