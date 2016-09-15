#include <iostream>
#include <ctype.h>

int main()
{
    int t, i;
    char map[27], s[101];

    std::cin >> t >> map;

    while (t--) {
        std::cin >> s;

        for (i = 0; s[i]; i++) {
            if      (islower(s[i]))  s[i] = map[s[i] - 'a'];
            else if (isupper(s[i]))  s[i] = toupper(map[s[i] - 'A']);
            else if (s[i] == '_')    s[i] = ' ';
        }

        std::cout << s << std::endl;
    }

    return 0;
}
