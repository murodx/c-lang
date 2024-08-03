#include <stdio.h>

typedef enum {
	NODE_STRING,
	NODE_INT
}node_type;

typedef union {
	int int_value;
	char* str_value;
}node_data;

typedef struct {
	node_type type;
	node_data data;
} node;

void print_node(node n) {
	if(n.type == NODE_STRING){
		printf("String: %s\n",n.data.str_value);
	}
	else if(n.type == NODE_INT){
		printf("Int: %d\n",n.data.int_value);
	}
}
int main() {
	node n1;
	n1.type = NODE_INT;
	n1.data.int_value = 22;
	
	node n2;
	n2.type = NODE_STRING;
	n2.data.str_value = "Hello World";
	
	print_node(n1);
	print_node(n2);

	return 0;
}
