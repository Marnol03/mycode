#include <stdio.h>
#include <string.h>

#define MAX_LEN 20

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage: %s reference_word\n", argv[0]);
    return 1;
  }

  char reference_word[MAX_LEN];
  strncpy(reference_word, argv[1], sizeof(reference_word));
  int reference_word_len = strlen(reference_word);

  char input_sentence[1024];
  printf("Enter a sentence: ");
  fgets(input_sentence, sizeof(input_sentence), stdin);
  int input_sentence_len = strlen(input_sentence);

  int matched_letters = 0;
  for (int i = 0; i < reference_word_len; i++) {
    for (int j = 0; j < input_sentence_len; j++) {
      if (reference_word[i] == input_sentence[j]) {
        matched_letters++;
        break;
      }
    }
  }

  if (matched_letters == reference_word_len) {
    printf("BINGO!\n");
  } else {
    printf("Not a match\n");
  }

  return 0;
}

