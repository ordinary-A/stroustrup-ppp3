/* now while this is not an exercise or a drill i included it as an exception because of it's importance imo and for you to verify your solution that you ideally did on a piece of paper first
 and to easily run the second requested string so you can focus on answering the drill questions and not worry about messing up the output in your head */

#include "PPPheaders.h"

int main()
{
string previous; // previous word; initialized to ""
string current; // current word
while (cin>>current) { // read a stream of words
if (previous == current) // check if the word is the same as last
cout << "repeated word: " << current << '\n';
previous = current;
}
}