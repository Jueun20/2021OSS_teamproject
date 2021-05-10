#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "item.h"

int main(void){
  Product plist[50];
  int index = 0;
  int count = 0, menu;
  
  while (1){
    menu = selectMenu();
    if(menu == 0) break;
    if(menu == 1){
      listProduct(plist, index);
    }
    else if(menu == 2){
      count += createProduct(&plist[index]);
      index++;
    }

  }
}

  
    
    
                
