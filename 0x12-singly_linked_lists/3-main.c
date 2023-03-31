#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    
    head = NULL;
    add_npde_end(&head, "Anne");
    add_npde_end(&head, "Colton");
    add_npde_end(&head, "Corbin");
    add_npde_end(&head, "Daniel");
    add_npde_end(&head, "Danton");
    add_npde_end(&head, "David");
    add_npde_end(&head, "Gary");
    add_npde_end(&head, "Holden");
    add_npde_end(&head, "Ian");
    add_npde_end(&head, "Ian");
    add_npde_end(&head, "Jay");
    add_npde_end(&head, "Jennie");
    add_npde_end(&head, "Jimmy");
    add_npde_end(&head, "Justin");
    add_npde_end(&head, "Kalson");
    add_npde_end(&head, "Kina");
    add_npde_end(&head, "Matthew");
    add_npde_end(&head, "Max");
    add_npde_end(&head, "Michael");
    add_npde_end(&head, "Ntuj");
    add_npde_end(&head, "Philip");
    add_npde_end(&head, "Richard");
    add_npde_end(&head, "Samantha");
    add_npde_end(&head, "Stuart");
    add_npde_end(&head, "Swati");
    add_npde_end(&head, "Timothy");
    add_npde_end(&head, "Victor");
    add_npde_end(&head, "Walton");
    print_list(head);
    return (0);
}
