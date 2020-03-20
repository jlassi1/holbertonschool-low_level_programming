
   # Singly linked lists

    ##When and why using linked lists vs arrays
    
Array is a datatype which is widely implemented as a default type, in almost all the modern programming languages, and is used to store data of similar type.

But there are many usecases, like the one where we don't know the quantity of data to be stored, for which advanced data structures are required, and one such data structure is linked list.

   ##How to build and use linked list
 
Well, they are connected through pointers. Usually a block in a linked list is represented through a structure like this :
        typedef struct list_s
        {
           char *str;
           unsigned int len;
           struct list_s *next;
        } list_t;

So as you can see here, this structure contains a string "str", unsigned int "len" and a pointer to a structure of same type. The string ‘str’ can be any string as len as well (depending upon the data that the linked list is holding) while the pointer ‘next’ contains the address of next block of this linked list. So linked list traversal is made possible through these ‘next’ pointers that contain address of the next node. The ‘next’ pointer of the last node (or for a single node linked list) would contain a NULL.

	A node is created by allocating memory to a structure (as shown in above point) in the following way :
		
		list_t *node = (list_t*)malloc(sizeof(list_t));
		node->str = "string";
		node->len = lenth of string;
		node->next = NULL;		



