#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "item.h"

int main(void){
	Item ilist[50];
	int index = 0;
	int count = 0, menu;
	
	count = loadData(ilist);
	index = count;

	while (1){
		menu = selectMenu();
    		if(menu == 0) break;
    		if(menu == 1){
			listItem(ilist, index);
			readItem(ilist[0]);
    		}
    		else if(menu == 2){
			count += createItem(&ilist[index]);
			index++;
    		}
    		else if(menu == 3){
			int no = selectDataNum(ilist, index);
			if(no > 0){
				updateItem(&ilist[no-1]);
      			}
			else{
				printf("=> 취소되었습니다!:->\n");
        			continue;
      			}
    		}
    		else if(menu == 4){
			int no = selectDataNum(ilist, index);
			if(no > 0) {
				printf("정말로 삭제하시겠습니까?(삭제: 1) ");
      			}
			int delok;
			scanf("%d", &delok);
			if(delok == 1) {
				deleteItem(&ilist[no-1]);
        			count--;
        			printf("=> 삭제되었습니다 :-)\n");
      			}
   		}
    		else if(menu == 5) {
			saveData(ilist, index);
    		}
    		else if(menu == 6) {
			searchName(ilist, index);
    		}
    		else if(menu == 7) {
			searchCate(ilist, index);
    		}
    		else if(menu == 8) {
			searchDate(ilist, index);
    		}
	}
  	printf("종료되었습니다:-)\n");
  	return 0;
}

  
    
    
                
