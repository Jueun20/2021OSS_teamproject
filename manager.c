#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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


//제품의 분류항목을 검색하는 함수
void searchCate(Item *p, int count){
        int scnt =0;
        char search[20];
        
        printf("검색할 제품의 분류항목을 입력해주세요.: ");
        scanf(" %s", search);
        printf("-------------------------------------\n");
        for(int i = 0; i < count; i++){
                if(p[i].price == -1) continue;
                if(strstr(p[i].cate, search)) {
                        printf("%2d", i+1);
                        readItem(p[i]);
                        scnt++;
                }
        }
        if(scnt == 0) printf("검색된 데이터가 없습니다...\n");
        printf("\n");
        
}

//제품의 등록 날짜를 검색하는 함수
void searchData(Item *p, int count){
        int scnt =0;
        char search[20];
        char change[20];

        printf("검색할 제품의 등록 날짜를 입력해주세요.: ");
        scanf(" %s", search);
        printf("-------------------------------------\n");
        for(int i = 0; i < count; i++){
                if(p[i].price == -1) continue;
		int a = p[i].price;
		sprintf(change, "%d", a);		
                if(strstr(change, search)) {
                        printf("%2d", i+1);
                        readItem(p[i]);
                        scnt++;
                }
        }
        if(scnt == 0) printf("검색된 데이터가 없습니다...\n");
        printf("\n");
        
}

//listItem()
void listItem(Item *p, int count){
        printf("\n");
        printf("=================================================================\n");
        for (int i = 0; i < count; i ++){
                if (p[i].price == -1)   continue;
                printf("%2d\t", i + 1);
                readItem(p[i]);
        }
        printf("\n");
}

//loadData()
int loadData(Item *p){
        int i = 0;
        FILE *fp;
        fp = fopen("houseKeeping.txt", "rt");

        if (fp == NULL){
                printf("\n");
                printf("=> 파일이 없습니다...\n");
        }
        else {
                for (i = 0; i < 20; i ++ ){
                        fscanf(fp, "%s", p[i].name);
                        if (feof(fp)) break;
                        fscanf(fp, "%s", p[i].cate);
                        fscanf(fp, "%d", &p[i].price);
                        fscanf(fp, "%d", &p[i].date);
                }
                fclose(fp);
                printf("\n");
                printf("=> 파일 데이터 불러오기 성공하였습니다~!");
                printf("\n");
        }
        return i;
}

//saveData()
void saveData(Item *p, int count){
        FILE *fp;
        fp = fopen("houseKeeping.txt", "wt");

        for (int i = 0; i < count; i ++){
                if (p[i].price == -1)   continue;
                else
                        fprintf(fp, "%s %s %d %d\n", p[i].name, p[i].cate, p[i].price, p[i].date);
        }
        fclose(fp);
        printf("=> 저장되었습니다!(파일명: Item.txt)\n");
}

//searchName()
void searchName(Item *p, int count){
        char search[30];
        int scnt = 0;

        printf("검색할 내용을 입력하세요: ");
        scanf(" %s", search);

        for (int i = 0; i < count; i ++){
                if (p[i].price == -1)   continue;
                else if (strstr(p[i].name, search)){
                        printf("=================================================================\n");
                        printf("%2d\t", i + 1);
                        readItem(p[i]);
                        scnt ++;
                }
        }
        if (scnt == 0)
                printf("=> 검색한 내용의 데이터 없음!\n");
}
