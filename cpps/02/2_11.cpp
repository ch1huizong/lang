#include <iostream>

/*! \enum GameResult
 *
 *  Game Result
 */
enum GameResult { WIN, LOSE, TIE, CANCEL };

int main(int argc, char *argv[]) {
  GameResult result;
  enum GameResult omit = CANCEL;

  for (int i = WIN; i <= CANCEL; ++i) {
    result = GameResult(i);
    if (result == omit) {
      std::cout << "The game was cancelled" << std::endl;
    } else {
      std::cout << "The game was played";
      if (result == WIN) {
        std::cout << " and we won!";
      }
      if (result == LOSE) {
        std::cout << " and we lost.";
      }
      std::cout << std::endl;
    }
  }

  return 0;
}
