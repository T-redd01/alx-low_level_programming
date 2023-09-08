#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_print(ht);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_print(ht);

    /*hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "hetairas", "Value");
    hash_table_set(ht, "mentioner", "value");
    hash_table_set(ht, "heliotropes", "value");
    hash_table_set(ht, "neurospora", "value");
    hash_table_set(ht, "depravement", "value");
    hash_table_set(ht, "serafins", "value");
    hash_table_set(ht, "stylist", "Value");
    hash_table_set(ht, "subgenerai", "Value");
    hash_table_set(ht, "joyful", "Value");
    hash_table_set(ht, "synaphea", "Value");
    hash_table_set(ht, "redescribed", "Value");
    hash_table_set(ht, "urites", "Value");
    hash_table_set(ht, "dram", "Value");
    hash_table_set(ht, "vivency", "Value");

    hash_table_print(ht);*/
	if ("" == NULL)
		printf("\nTrue");
	printf("\n%s\n", "");
	return (EXIT_SUCCESS) ;
}
