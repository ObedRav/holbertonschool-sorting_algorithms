#include <stdlib.h>
#include <stdio.h>
#include "deck.h"

void print_deck(const deck_node_t *deck)
{
	size_t i;
	char kinds[4] = {'S', 'H', 'C', 'D'};

	i = 0;
	while (deck)
	{
		if (i)
			printf(", ");
		printf("{%s, %c}", deck->card->value, kinds[deck->card->kind]);
		if (i == 12)
			printf("\n");
		i = (i + 1) % 13;
		deck = deck->next;
	}
}

deck_node_t *init_deck(const card_t cards[52])
{
	deck_node_t *deck;
	deck_node_t *node;
	size_t i;

	i = 52;
	deck = NULL;
	while (i--)
	{
		node = malloc(sizeof(*node));
		if (!node)
			return (NULL);
		node->card = &cards[i];
		node->next = deck;
		node->prev = NULL;
		if (deck)
			deck->prev = node;
		deck = node;
	}
	return (deck);
}

int main(void)
{
	card_t cards[52] = {
		{"11", CLUB}, {"4", HEART}, {"3", HEART}, {"3", DIAMOND}, {"12", HEART}, {"5", HEART}, {"5", SPADE}, {"10", HEART}, {"6", HEART}, {"5", DIAMOND}, {"6", SPADE}, {"9", HEART}, {"7", DIAMOND}, {"11", SPADE}, {"1", DIAMOND}, {"9", CLUB}, {"11", DIAMOND}, {"7", SPADE}, {"13", DIAMOND}, {"10", CLUB}, {"13", SPADE}, {"8", CLUB}, {"9", SPADE}, {"6", CLUB}, {"1", CLUB}, {"3", SPADE}, {"8", SPADE}, {"9", DIAMOND}, {"2", HEART}, {"4", DIAMOND}, {"6", DIAMOND}, {"3", CLUB}, {"12", CLUB}, {"10", SPADE}, {"8", DIAMOND}, {"8", HEART}, {"1", SPADE}, {"11", HEART}, {"2", CLUB}, {"4", SPADE}, {"2", SPADE}, {"2", DIAMOND}, {"13", CLUB}, {"12", SPADE}, {"12", DIAMOND}, {"7", CLUB}, {"7", HEART}, {"5", CLUB}, {"10", DIAMOND}, {"4", CLUB}, {"13", HEART}, {"1", HEART},
	};
	deck_node_t *deck;

	deck = init_deck(cards);
	print_deck(deck);
	printf("\n");
	sort_deck(&deck);
	printf("\n");
	print_deck(deck);
	return (0);
}