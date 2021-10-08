#includ "hash_tables.h"
/**
 *key_index - a function that gives you the index of a key
 *@key: is the key(char)
 *@size: is the size of the array of the hash table (int)
 *Return: unsigned int long int
 **/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int x;
x = hash_djb2(key) % size;
return (x);
}
