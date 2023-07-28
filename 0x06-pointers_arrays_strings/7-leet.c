
char *leet(char *str) {
    char replacements[256] = {0};
    replacements['a'] = replacements['A'] = '4';
    replacements['e'] = replacements['E'] = '3';
    replacements['o'] = replacements['O'] = '0';
    replacements['t'] = replacements['T'] = '7';
    replacements['l'] = replacements['L'] = '1';

    for (int i = 0; str[i] != '\0'; i++) {
        if (replacements[(unsigned char)str[i]]) {
            str[i] = replacements[(unsigned char)str[i]];
        }
    }

    return str;
}