# 0x17. C - Doubly linked lists

# Files
1. **0-print_dlistint.c**
   - Function that prints all the elements of a dlistint_t list.
     - Return: the number of nodes

2. **1-dlistint_len.c**
   - Function that returns the number of elements in a linked dlistint_t list.

3. **2-add_dnodeint.c**
   - Function that adds a new node at the beginning of a dlistint_t list.
     - Return: the address of the new element, or NULL if it failed

4. **3-add_dnodeint_end.c**
   - Function that adds a new node at the end of a dlistint_t list.
     - Return: the address of the new element, or NULL if it failed

5. **4-free_dlistint.c**
   - Function that frees a dlistint_t list.

6. **5-get_dnodeint.c**
   - Function that returns the nth node of a dlistint_t linked list.
     - where index is the index of the node, starting from 0
     - if the node does not exist, return NULL

7. **6-sum_dlistint.c**
   - Function that returns the sum of all the data (n) of a dlistint_t linked list.
     - if the list is empty, return 0

8. **7-insert_dnodeint.c** & **2-add_dnodeint.c** & **2-add_dnodeint.c**
   - Function that inserts a new node at a given position.
     - where idx is the index of the list where the new node should be added. Index starts at 0
     - Returns: the address of the new node, or NULL if it failed
     - if it is not possible to add the new node at index idx, do not add the new node and return NULL

9. **8-delete_dnodeint.c**
   - Function that deletes the node at index index of a dlistint_t linked list.
     - where index is the index of the node that should be deleted. Index starts at 0
     - Returns: 1 if it succeeded, -1 if it failed

