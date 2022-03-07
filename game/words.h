#ifndef WORDS_H_INCLUDED
#define WORDS_H_INCLUDED

class word
{
private:
    char *cuv;
    char *hidden;
    char *hint1;
    char *hint2;
    int greseli;
public:
    word(const char* ,const char*,const char*);
    word(const word&);
    ~word();
    char* get_cuv();
    char* get_hint1();
    char* get_hint2();
    char* get_hidden();
    int get_greseli();
    set_greseli(int);
    set_cuv(const char*);
    set_hint1(const char*);
    set_hint2(const char*);
    set_hidden(const char*);
    void check(char);
};

#endif // WORDS_H_INCLUDED
