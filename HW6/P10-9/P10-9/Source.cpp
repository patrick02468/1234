#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct card {
	const char *face;
	const char *suit;
};

typedef struct card Card;

void fillDeck(Card * const wDeck, const char * wFace[], const char * wSuit[]);
void shuffle(Card * const wDeck);
void deal(const Card * const wDeck);

int main(void) {
	Card deck[52];

	const char *suit[] = { "Hearts", "Diamonds", "Clubs", "Spades" };
	const char *face[] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

	srand(time(NULL));
	fillDeck(deck, face, suit);
	shuffle(deck);
	deal(deck);
	return 0;
}

void fillDeck(Card * const wDeck, const char * wFace[], const char * wSuit[]) {
	for (int i = 0; i <= 51; i++) {
		wDeck[i].face = wFace[i % 13];
		wDeck[i].suit = wFace[i / 13];
	}
}

void shuffle(Card * const wDeck) {
	int j;
	Card temp;
	for (int i = 0; i <= 51; i++) {
		j = rand() % 52;
		temp = wDeck[i];
		wDeck[i] = wDeck[j];
		wDeck[j] = temp;
	}
}

void deal(const Card * const wDeck) {
	for (int i = 0; i <= 51; i++) {
		printf("%5s of %-8s%s", wDeck[i].face, wDeck[i].suit, (i + 1) % 4 ? " " : "\n");
	}

}