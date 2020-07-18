#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

struct word {
    char* data;
};

struct sentence {
    struct word* data;
    int word_count;//denotes number of words in a sentence
};

struct paragraph {
    struct sentence* data;
    int sentence_count;//denotes number of sentences in a paragraph
};

struct document {
    struct paragraph* data;
    int paragraph_count;//denotes number of paragraphs in a document
};
struct document get_document(char* text) {

    struct document doc;
    doc.data = NULL;
    doc.paragraph_count = 1;


    int i = 0;
    while (text[i] != '\0') {
        if (text[i] == '\n') {
            doc.paragraph_count++;

        }
        i++;
    }
    i = 0;
    doc.data = (struct paragraph*)malloc(doc.paragraph_count * sizeof(struct paragraph));
    for (int j = 0; j < doc.paragraph_count; j++) {
        doc.data[j].data = NULL;
        doc.data[j].sentence_count = 0;
        while ((text[i] != '\n') && (text[i] != '\0')) {
            if (text[i] == '.') {
                doc.data[j].sentence_count++;;
            }
            i++;
        }
        if (text[i] == '\n') {
            i++;
        }
        doc.data[j].data = (struct sentence*)malloc(doc.data[j].sentence_count * sizeof(struct sentence));
    }
    i = 0;
    int n = 0;
    int y = 0;
    int o = 0;
    for (int j = 0; j < doc.paragraph_count; j++)
    {
        for (int l = 0; l < doc.data[j].sentence_count; l++) 
        {
            doc.data[j].data[l].data = NULL;
            doc.data[j].data[l].word_count = 1;
            while (text[i] != '.')
            {
                if (text[i] == ' ')
                {
                    doc.data[j].data[l].word_count++;
                }
                i++;
            }
            i++;
            if (text[i] == '\n') {
                i++;
            }
            
            
            doc.data[j].data[l].data = (struct word*)malloc(doc.data[j].data[l].word_count * sizeof(struct word));
            for (int m = 0; m < doc.data[j].data[l].word_count; m++) 
            {
                o = 0;
                while ((text[n] != ' ') && (text[n] != '.'))
                {
                    o++;
                    n++;
                }
                n++;
                if (text[n] == '\n') {
                    n++;
                }
                doc.data[j].data[l].data[m].data = (char*)malloc((o+1) * sizeof(char));
                doc.data[j].data[l].data[m].data[o] = '\0';
                
                for (int r = 0; r < o; r++) 
                {
                    doc.data[j].data[l].data[m].data[r] = text[y];
                    y++;
                }
                y++;
                if (text[y] == '\n') {
                    y++;
                }

            }
        }
        
    }
    return doc;
}

struct word kth_word_in_mth_sentence_of_nth_paragraph(struct document Doc, int k, int m, int n) {
    
    return Doc.data[n-1].data[m-1].data[k-1];
}

struct sentence kth_sentence_in_mth_paragraph(struct document Doc, int k, int m) {
    return Doc.data[m-1].data[k-1];
}

struct paragraph kth_paragraph(struct document Doc, int k) {
    return Doc.data[k-1];
}


void print_word(struct word w) {
    printf("%s", w.data);
}

void print_sentence(struct sentence sen) {
    for (int i = 0; i < sen.word_count; i++) {
        print_word(sen.data[i]);
        if (i != sen.word_count - 1) {
            printf(" ");
        }
    }
}

void print_paragraph(struct paragraph para) {
    for (int i = 0; i < para.sentence_count; i++) {
        print_sentence(para.data[i]);
        printf(".");
    }
}

void print_document(struct document doc) {
    for (int i = 0; i < doc.paragraph_count; i++) {
        print_paragraph(doc.data[i]);
        if (i != doc.paragraph_count - 1)
            printf("\n");
    }
}

char* get_input_text() {
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen(doc) + 1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}

int main()
{
    char* text = get_input_text();
    struct document Doc = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3) {
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            struct word w = kth_word_in_mth_sentence_of_nth_paragraph(Doc, k, m, n);
            print_word(w);
        }

        else if (type == 2) {
            int k, m;
            scanf("%d %d", &k, &m);
            struct sentence sen = kth_sentence_in_mth_paragraph(Doc, k, m);
            print_sentence(sen);
        }

        else {
            int k;
            scanf("%d", &k);
            struct paragraph para = kth_paragraph(Doc, k);
            print_paragraph(para);
       
        }
        printf("\n");
    }
}