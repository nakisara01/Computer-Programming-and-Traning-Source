#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
   int data;
   struct NODE* link;
} NODE;

int get_integer();
void print_list(NODE* plist);
void free_list(NODE* plist);

int main() {
   NODE* start;
   NODE* node_p = NULL, * node = NULL;
   start = NULL;
   int num;
   
   start = (NODE*)malloc(sizeof(NODE));
   while (1) {
      num = get_integer();
      if (num < 0)
         break;
      node_p = (NODE*)malloc(sizeof(NODE));
      node_p->data = num;
      node_p->link = NULL;
      if (node == NULL)
         start = node_p;
      else
         node->link = node_p;
      node = node_p;
   }
   print_list(start);
   free_list(start);
   return 0;
}

int get_integer() {
   int num = 0;
   printf("양의 정수를 입력하시오 (종료하려면 -1을 입력): ");
   scanf("%d", &num);
   return num;
}

void print_list(NODE* plist) {
   NODE* p;
   p = plist;
   while (p) {
      printf("%d->", p->data);
      p = p->link;
   }
   
   printf("NULL\n");
}

void free_list(NODE* plist) {
   free(plist);
}