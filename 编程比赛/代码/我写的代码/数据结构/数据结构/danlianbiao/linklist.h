//创建单链表结构体 
typedef int ElemType;
struct LNode{
	ElemType data;
	struct LNode *next;
};
typedef struct LNode LNode;
typedef struct LNode *LinkList;
