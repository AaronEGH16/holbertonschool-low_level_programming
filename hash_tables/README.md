hash tables:

	its a combination of structs and array of pointers, in hash tables you have
	a key (word or number whit a asociated value) and a value, also you have a
	2 structs, the node struct, and the hash table struct.
	
	- node struct:
		the node struct contains:
			* key
			* value
			* pointer to the next node;

	- hash table struct:
		the hash table contains:
			* size (size of the base array)
			* array of nodes
