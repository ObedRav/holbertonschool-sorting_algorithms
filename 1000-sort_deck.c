#include "deck.h"

/**
 * swapList - function that swap 2 nodes
 * @current: current node
 * @tmp: node
 */
void swapList(deck_node_t *current, deck_node_t *tmp)
{
	if (current->prev)
		current->prev->next = tmp;
	if (tmp->next)
		tmp->next->prev = current;

	current->next = tmp->next;
	tmp->prev = current->prev;
	current->prev = tmp;
	tmp->next = current;
}

/**
 * insertion_value - sorts an deck by insertion
 * @deck: the deck to sort
 */
void insertion_value(deck_node_t **deck)
{
	(void) deck;
	return;
}

/**
 * insertion_kind - sorts an deck by insertion
 * @deck: the deck to sort
 */
void insertion_kind(deck_node_t **deck)
{
	deck_node_t *tmp, *current;
	//int intTmp, intCurrent;

	if (!(deck && *deck && (*deck)->next))
		return;

	tmp = (*deck)->next;

	while (tmp)
	{
		current = tmp;
		tmp = tmp->next;
		while (current && current->prev)
		{
			//intTmp = atoi(current->prev->card->value);
			//intCurrent = atoi(current->card->value);
			if (current->prev->card->kind > current->card->kind)
			{
				swapList(current->prev, current);
				if (!current->prev)
					*deck = current;
			}
			else
				current = current->prev;
		}
	}
}

/**
 * sort_deck - a function that sorts a deck of cards.
 * @deck: the deck to sort
 */ 
void sort_deck(deck_node_t **deck)
{
	if (!*deck || !deck)
		return;

	insertion_kind(deck);
	insertion_value(deck);
}