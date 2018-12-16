// The includes - Don't touch them !

#include "../lib/key.h"
#include "../lib/notes.h"

// Replace these keys with yours.
// Syntax : Key name(pin, note);
// Note syntax : NOTE_letterNumber
//                   A to G   0 to 8
//                 (exclude A0 and B0)

Key a(2, NOTE_G2);
Key b(3, NOTE_C3);
Key c(4, NOTE_F3);
Key d(5, NOTE_B4);
Key e(6, NOTE_E4);
Key f(7, NOTE_A5);
Key g(8, NOTE_D5);
Key h(9, NOTE_G5);
Key i(10, NOTE_C6);
Key j(11, NOTE_F6);

// The pin where the buzzer is

int buzzer = 13;

// Complete this array with your keys.

Key keys[] = {a, b, c, d, e, f, g, h, i, j};