#define Max 10

struct staticQueue {
	int front;
	int length;
	int values [Max];
};
typedef struct staticQueue *SQueue;

/*
(s->front + s->length)%Max : da a posicao aonde vai ser inserido o proximo elemento
s->front = (s->front + 1) % Max : para o front passar para 0 quando chegar ao Max
*/


struct dinQueue {
	int size;
	int front;
	int length;
	int *values;
};
typedef struct dinQueue *DQueue;

void SinitQueue (SQueue q);
int  SisEmptyQ  (SQueue q);
int  Senqueue   (SQueue q, int x);
int  Sdequeue   (SQueue q, int *x);
int  Sfront     (SQueue q, int *x);
void ShowSQueue (SQueue q);

void DinitQueue (DQueue q);
int  DisEmptyQ  (DQueue q);
int  Denqueue   (DQueue q, int x);
int  Ddequeue   (DQueue q, int *x);
int  Dfront     (DQueue q, int *x);
void ShowDQueue (DQueue q);

