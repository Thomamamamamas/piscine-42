#ifndef _LIST_H_
#define _LIST_H_

typedef struct s_List
{
	char data;
	char	prev;
	char	next;
	int		index;
	int		size;
}List;

#endif
