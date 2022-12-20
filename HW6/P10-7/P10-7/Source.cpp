#include <stdio.h>
#include <stdlib.h>
struct card {
	const char *face;
	const char *suit;
};

int main(void) {
	struct card aCard;
	struct card *carPtr;
	aCard.face = "Ace";
	aCard.suit = "Spades";

	carPtr = &aCard;
	printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit, carPtr->face, " of ", carPtr->suit, (*carPtr).face, " of ", (*carPtr).suit);


	return 0;
}