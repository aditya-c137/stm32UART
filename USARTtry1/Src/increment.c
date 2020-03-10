#include "variabl3s.h"

int count = 0;

void increment(int i){
	count = (count + i) % 200;
}
